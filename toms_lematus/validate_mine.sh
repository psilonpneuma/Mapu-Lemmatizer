echo "Lemmatizing test set"
THEANO_FLAGS=mode=FAST_RUN,floatX=float32,device=$device,on_unused_input=warn,base_compiledir=${base_compiledir} python ${basedir}/nematus/translate.py \
     -m ${modeldir}/best_model/model.npz \
     -i ${modeldir}/data/test-sources  \
     -o ${modeldir}/best_model/test-hypothesis \
     -k 12 -n -p 1

echo "Done"