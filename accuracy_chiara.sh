
modeldir="/Users/chiarasemenzin/Desktop/MscProject/toms_lematus/models/Mapu-0-char-context-v1"

python3 ./data/accuracy.py ${modeldir}/data/test-targets < ${modeldir}/test-hypothesis >> ${modeldir}/test_accuracy
ACCURACY=`python3 ./data/accuracy.py ${modeldir}/data/test-targets < ${modeldir}/test-hypothesis`

echo $ACCURACY