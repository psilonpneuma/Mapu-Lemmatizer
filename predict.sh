#!/bin/bash
lang=$1
type=$2
experiment_id=$3

# theano device, in case you do not want to compute on gpu, change it to cpu
device=cpu

basedir=.
modeldir=${basedir}/models/${lang}-${type}-${experiment_id}

echo "Lemmatizing test set"


echo "Lemmatizing test set"
THEANO_FLAGS=mode=FAST_RUN,floatX=float32,device=$device,on_unused_input=warn,base_compiledir=${base_compiledir} python ${basedir}/nematus/translate.py \
     -m ${modeldir}/model.npz \
     -i ${modeldir}/data/test-sources-ben  \
     -o ${modeldir}/test-hypothesis-ben \
     -k 12 -n -p 1

python3 ./data/accuracy.py ${modeldir}/data/test-targets-ben < ${modeldir}/test-hypothesis-ben >> ${modeldir}/test_accuracy_ben
ACCURACY=`python3 ./data/accuracy.py ${modeldir}/data/test-targets-ben < ${modeldir}/test-hypothesis-ben`


echo "ACCURACY ON TEST SET: " $ACCURACY