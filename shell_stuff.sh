####Shell Script

#clean from <div> tags

for i in *; do sed -i.bak "s/<[\/]*div>//g" $i; done


# Run Lematus

./train.sh {$lang} {$type} {$exp_number}