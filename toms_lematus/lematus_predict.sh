#theano compilation directory
device=cpu
base_compiledir=theano
mkdir -p ${base_compiledir}

basedir=.
datadir=${basedir}/data/languages
modeldir=${basedir}/models/mapu-0-char-context-niquetamere2

echo "Lemmatizing test set"
THEANO_FLAGS=mode=FAST_RUN,floatX=float32,device=$device,on_unused_input=warn,base_compiledir=${base_compiledir} python ${basedir}/nematus/translate.py \
     -m ${modeldir}/model.npz \
     -i ${modeldir}/data/test-sources  \
     -o ${modeldir}/test-hypothesis \
     -k 12 -n -p 1 \
	 --n-best