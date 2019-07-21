def build_encoder(tparams, options, dropout, x_mask=None, sampling=False):

    x = tensor.tensor3('x', dtype='int64')
    # source text; factors 1; length 5; batch size 10
    x.tag.test_value = (numpy.random.rand(1, 5, 10)*100).astype('int64')

    # for the backward rnn, we just need to invert x
    xr = x[:,::-1]
    if x_mask is None:
        xr_mask = None
    else:
        xr_mask = x_mask[::-1]

    n_timesteps = x.shape[1]
    n_samples = x.shape[2]

    # word embedding for forward rnn (source)
    emb = get_layer_constr('embedding')(tparams, x, suffix='', factors= options['factors'])

    # word embedding for backward rnn (source)
    embr = get_layer_constr('embedding')(tparams, xr, suffix='', factors= options['factors'])

    if options['use_dropout']:
        source_dropout = dropout((n_timesteps, n_samples, 1), options['dropout_source'])
        if not sampling:
            source_dropout = tensor.tile(source_dropout, (1,1,options['dim_word']))
        emb *= source_dropout

        if sampling:
            embr *= source_dropout
        else:
            # we drop out the same words in both directions
            embr *= source_dropout[::-1]


    ## level 1
    proj = get_layer_constr(options['encoder'])(tparams, emb, options, dropout,
                                                prefix='encoder',
                                                mask=x_mask,
                                                dropout_probability_below=options['dropout_embedding'],
                                                dropout_probability_rec=options['dropout_hidden'],
                                                recurrence_transition_depth=options['enc_recurrence_transition_depth'],
                                                truncate_gradient=options['encoder_truncate_gradient'],
                                                profile=profile)
    projr = get_layer_constr(options['encoder'])(tparams, embr, options, dropout,
                                                 prefix='encoder_r',
                                                 mask=xr_mask,
                                                 dropout_probability_below=options['dropout_embedding'],
                                                 dropout_probability_rec=options['dropout_hidden'],
                                                 recurrence_transition_depth=options['enc_recurrence_transition_depth'],
                                                 truncate_gradient=options['encoder_truncate_gradient'],
                                                 profile=profile)

    # discard LSTM cell state
    if options['encoder'].startswith('lstm'):
        proj[0] = get_slice(proj[0], 0, options['dim'])
        projr[0] = get_slice(projr[0], 0, options['dim'])

    ## bidirectional levels before merge
    for level in range(2, options['enc_depth_bidirectional'] + 1):
        prefix_f = pp('encoder', level)
        prefix_r = pp('encoder_r', level)

        # run forward on previous backward and backward on previous forward
        input_f = projr[0][::-1]
        input_r = proj[0][::-1]

        proj = get_layer_constr(options['encoder'])(tparams, input_f, options, dropout,
                                                    prefix=prefix_f,
                                                    mask=x_mask,
                                                    dropout_probability_below=options['dropout_hidden'],
                                                    dropout_probability_rec=options['dropout_hidden'],
                                                    recurrence_transition_depth=options['enc_recurrence_transition_depth'],
                                                    truncate_gradient=options['encoder_truncate_gradient'],
                                                    profile=profile)
        projr = get_layer_constr(options['encoder'])(tparams, input_r, options, dropout,
                                                     prefix=prefix_r,
                                                     mask=xr_mask,
                                                     dropout_probability_below=options['dropout_hidden'],
                                                     dropout_probability_rec=options['dropout_hidden'],
                                                     recurrence_transition_depth=options['enc_recurrence_transition_depth'],
                                                     truncate_gradient=options['encoder_truncate_gradient'],
                                                     profile=profile)

        # discard LSTM cell state
        if options['encoder'].startswith('lstm'):
            proj[0] = get_slice(proj[0], 0, options['dim'])
            projr[0] = get_slice(projr[0], 0, options['dim'])

        # residual connections
        if level > 1:
            proj[0] += input_f
            projr[0] += input_r

    # context will be the concatenation of forward and backward rnns
    ctx = concatenate([proj[0], projr[0][::-1]], axis=proj[0].ndim-1)

    ## forward encoder layers after bidirectional layers are concatenated
    for level in range(options['enc_depth_bidirectional'] + 1, options['enc_depth'] + 1):

        ctx += get_layer_constr(options['encoder'])(tparams, ctx, options, dropout,
                                                   prefix=pp('encoder', level),
                                                   mask=x_mask,
                                                   dropout_probability_below=options['dropout_hidden'],
                                                   dropout_probability_rec=options['dropout_hidden'],
                                                   recurrence_transition_depth=options['enc_recurrence_transition_depth'],
                                                   truncate_gradient=options['encoder_truncate_gradient'],
                                                   profile=profile)[0]

    return x, ctx