import xml.etree.ElementTree as ET
import os
#filename= os.path.expanduser("~/porcodiolenz.xml")
import xmltodict
from collections import defaultdict


tree = ET.parse('/Users/chiarasemenzin/Desktop/MscProject/corpus/porcodiolenz.xml')
root = tree.getroot()
namespaces={"http://www.w3.org/XML/1998/namespace":"lang","http://www.tei-c.org/ns/1.0":"m"}
xml_lenz=xmltodict.parse(open('/Users/chiarasemenzin/Desktop/MscProject/corpus/porcodiolenz.xml','rb'), process_namespaces=True,
                    namespaces=namespaces)
xml_augu=xmltodict.parse(open('/Users/chiarasemenzin/Desktop/MscProject/corpus/porcodioaugu.xml','rb'), process_namespaces=True,
                    namespaces=namespaces)


#nr_phrases=len(xml["m:TEI"]["m:text"]["m:body"]["m:p"])


#parse only arn phrases: iterates dictionaries

LENZ=defaultdict(list)
AUGU=defaultdict(list)


def xml_iteration(AllData,xml):
    for phrase in xml["m:TEI"]["m:text"]["m:body"]["m:p"]:
        if phrase["@lang:lang"]=="arn":
            print("\n")
            for word in phrase["m:w"]:
                try:
                    for morpheme in word["m:m"]:

                        try:
                            print(morpheme["#text"],"\t",morpheme["@baseForm"],"\n ")
                            AllData[morpheme["#text"].lower()].append(morpheme["@baseForm"])
                            #print(morpheme["#text"].lower())
                            #print("\t",count,morpheme["@baseForm"])
                            #print(morpheme["#text"],"\t", "type=",morpheme["@type"],"corresp=",morpheme["@corresp"],"\t", morpheme["@baseForm"])
                            continue
                        except:
                            try:
                                #print(word['m:m']['#text'],"\t",word['m:m']["@baseForm"],"\n ")
                                AllData[word['m:m']['#text'].lower()].append(word['m:m']["@baseForm"])
                                #print(word['m:m']['#text'].lower())
                                #print("\tTARGET: ",count,word['m:m']["@baseForm"])
                                #print(word['m:m']['#text'], "\t", "type=",word['m:m']["@type"],"corresp=",word['m:m']["@corresp"],"\t", word['m:m']["@baseForm"])

                            except:
                                try:
                                    #print(word['m:m'][0]['#text'],"\t",word['m:m'][0]["@baseForm"],"\n ")
                                    AllData[word['m:m'][0]['#text'].lower()].append(word['m:m'][0]["@baseForm"])
                                    #print(word['m:m'][0]['#text'].lower())
                                    #print(word['m:m'][0]['#text'].lower(),"\t", "type=",word['m:m'][0]["@type"],"corresp=",word['m:m'][0]["@corresp"],"\t", word['m:m'][0]["@baseForm"])

                                except:
                                    continue
                        break

                except:
                    try:
                        print("bad morpheme-type2:",phrase["m:w"]["m:m"])
                    except:
                        print("bad morpheme:", word)
    return AllData

LENZ=xml_iteration(LENZ,xml_lenz)
#AUGU=xml_iteration(AUGU,xml_augu)


# S is the source, M is the dummy model

def dummy_predict(S,M):
    tot=0
    correct=0
    for i in S.keys():
        tot+=1
        if i in M:
            pred=max(set(M[i]), key=M[i].count)
        else:
            pred=i
       # if pred=S.values()
    return pred



#dummy_predict(AUGU,LENZ)
right=0
count=0
for phrase in xml_augu["m:TEI"]["m:text"]["m:body"]["m:p"]:
    if phrase["@lang:lang"] == "arn":
        print("\n")
        for word in phrase["m:w"]:
            try:
                for morpheme in word["m:m"]:
                    count += 1
                    #print(count)
                try:
                    if max(set((LENZ[morpheme["#text"]]))) == morpheme["@baseForm"]:
                        print("MATCH!!!", max(set((LENZ[morpheme["#text"]]))), morpheme["@baseForm"])
                        right += 1
                    elif morpheme["@baseForm"] == morpheme["#text"]:
                        print("LUCKY MATCH!")
                        right += 1

                    continue
                except:
                    try:
                        # print(word['m:m']['#text'],"\t",word['m:m']["@baseForm"],"\n ")
                        if max(set((LENZ[word['m:m']['#text']]))) == morpheme["@baseForm"]:
                            print("SUCCESS:", max(set((LENZ[word['m:m']['#text']]))), morpheme["@baseForm"])
                            right += 1
                        elif morpheme["@baseForm"] == morpheme["#text"]:
                            print("LUCKY MATCH!")
                            right += 1
                    except:
                        try:
                            # print(word['m:m'][0]['#text'],"\t",word['m:m'][0]["@baseForm"],"\n ")
                            if max(set((LENZ[word['m:m'][0]['#text']]))) == morpheme["@baseForm"]:
                                print("SUCCESS:", max(set((LENZ[word['m:m']['#text']]))), morpheme["@baseForm"])
                                right += 1
                        except:
                            continue
                break

            except:
                try:
                    print("bad morpheme-type2:", phrase["m:w"]["m:m"])
                except:
                    print("bad morpheme:", word)
print(right/count*100)