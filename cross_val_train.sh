#    --datasets ${modeldir}{trainsources} ${modeldir}/{traintargets} \
#    --valid_datasets ${modeldir}{devsources} ${modeldir}{devtargets} \
# where
# devsources=/data/

# are the arguments to be changed: train/test-XYs will be a split of the dataset coming from .py code
# eg. input train-sources/dev-sources together, XY
# output: train, dev set split (X/Y are sources and targets)

for i=1:${kfolds}
    do 
#-- valid_datasets ${modeldir}/data/training-sources-${i} 

THEANO_FLAGS=mode=FAST_RUN,floatX=float32,device=$device,base_compiledir=${base_compiledir} python ${basedir}/nematus/nmt.py \
    --model ${modeldir}/model.npz \
    --datasets ${modeldir}/data/training-sources-${i} ${modeldir}/data/training-targets-${i} \
    --valid_datasets ${modeldir}/data/dev-sources-${i} ${modeldir}/data/dev-targets-${i} \
    --dictionaries ${modeldir}/data/train-sources.json ${modeldir}/data/train-targets.json \
    --dim_word ${dim_word} \
    --dim ${dim} \
    --n_words_src ${n_words_src} \
    --n_words ${n_words_trg} \
    --maxlen ${maxlen} \
    --optimizer ${optimizer} \
    --batch_size ${batch_size} \
    --dispFreq ${dispFreq} \
    --max_epochs ${max_epochs} \
    --external_validation_script ${modeldir}/validate.sh \
    --weight_normalisation \
    --reload \
    --no_reload_training_progress \
    --use_dropout \
    --enc_depth 2 \
    --dec_depth 2 \
    --patience 10 \
    --validBurnIn ${validBurnIn} \
    --validFreq ${valid_freq} &> ${modeldir}/training.log
echo "End of training"

end