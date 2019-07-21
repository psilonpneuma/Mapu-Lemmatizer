# -*- encoding: utf-8 -*-
#
# LOAD DATASET
import os
from collections import OrderedDict
from load_data import parse_XML,process_spelling

#Initialize data struct

corpus_tg="/Users/chiarasemenzin/Desktop/MscProject/corpus/Tagged/"
corpus_ut="/Users/chiarasemenzin/Desktop/MscProject/corpus/Untagged/"

TAG_DATA=OrderedDict()

# PARSE XML TAGGED

for root, dirs, files in os.walk(corpus_tg):
    files = [ fi for fi in files if fi.endswith(".xml")]
    for file in files:
        print("Parsing ",file,"...")
        phrase_list,lemmas=parse_XML.xml_iteration(corpus_tg+file)
        TAG_DATA[file]=[phrase_list,lemmas]


UNTAG_DATA=OrderedDict()

for root, dirs, files in os.walk(corpus_ut):
    files = [ fi for fi in files if fi.endswith(".xml")]
    for file in files:
        print("Parsing ",file,"...")
        try:
            phrase_list=parse_XML.xml_iteration(corpus_ut+file,tagged=False)
            UNTAG_DATA[file]=phrase_list
        except:
            continue
    print("Done.")



changes=(("ʎ".decode('utf8'),"ll".decode('utf8')),("t'".decode('utf8'),"tr".decode('utf8')),("ə".decode('utf8'),"ü".decode('utf8')))


UNTAG_DATA_norm=process_spelling.process_spelling(UNTAG_DATA,changes[0])
TAG_DATA_norm=process_spelling.process_spelling(TAG_DATA,changes[0])

UNTAG_DATA_norm=process_spelling.process_spelling(UNTAG_DATA_norm,changes[1])
TAG_DATA_norm=process_spelling.process_spelling(TAG_DATA_norm,changes[1])

UNTAG_DATA_norm=process_spelling.process_spelling(UNTAG_DATA_norm,changes[2])
TAG_DATA_norm=process_spelling.process_spelling(TAG_DATA_norm,changes[2])


