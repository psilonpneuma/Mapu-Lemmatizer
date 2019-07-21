import xmltodict


namespaces={"http://www.w3.org/XML/1998/namespace":"lang","http://www.tei-c.org/ns/1.0":"m"}
xml_lenz=xmltodict.parse(open('/Users/chiarasemenzin/Desktop/MscProject/corpus/porcodiolenz.xml','rb'), process_namespaces=True,
                    namespaces=namespaces)
xml_augu=xmltodict.parse(open('/Users/chiarasemenzin/Desktop/MscProject/corpus/porcodioaugu.xml','rb'), process_namespaces=True,
                    namespaces=namespaces)


default='/Users/chiarasemenzin/Desktop/MscProject/corpus/porcodioaugu.xml'

def read_xml(xml):
    namespaces = {"http://www.w3.org/XML/1998/namespace": "lang", "http://www.tei-c.org/ns/1.0": "m"}
    xml_dict = xmltodict.parse(open(xml, 'rb'),
                               process_namespaces=True,
                               namespaces=namespaces)
    return xml_dict

def xml_iteration(output_file,xml=default):
    with open(output_file,"w") as fp:
        for phrase in xml["m:TEI"]["m:text"]["m:body"]["m:p"]:
            if phrase["@lang:lang"]=="arn":
                print("\n")
                for word in phrase["m:w"]:
                    print("LEMMA:",word["@lemma"])
                    fp.write(word["@lemma"]+"\t")
                    morphemes=[]
                    try:
                        for morpheme in word["m:m"]:
                            try:
                                #print(morpheme["#text"],"\t",morpheme["@baseForm"],"\n ")
                                #AllData[morpheme["#text"].lower()].append(morpheme["@baseForm"])
                                #print(morpheme["#text"].lower())
                                morphemes.append(morpheme["#text"].lower())
                                #print("\t",count,morpheme["@baseForm"])
                                #print(morpheme["#text"],"\t", "type=",morpheme["@type"],"corresp=",morpheme["@corresp"],"\t", morpheme["@baseForm"])
                                continue
                            except:
                                try:
                                    #print(word['m:m']['#text'],"\t",word['m:m']["@baseForm"],"\n ")
                                    #AllData[word['m:m']['#text'].lower()].append(word['m:m']["@baseForm"])
                                    #print(word['m:m']['#text'].lower())
                                    morphemes.append(word['m:m']['#text'].lower())
                                    #print("\tTARGET: ",count,word['m:m']["@baseForm"])
                                    #print(word['m:m']['#text'], "\t", "type=",word['m:m']["@type"],"corresp=",word['m:m']["@corresp"],"\t", word['m:m']["@baseForm"])

                                except:
                                    try:
                                        #print(word['m:m'][0]['#text'],"\t",word['m:m'][0]["@baseForm"],"\n ")
                                        #AllData[word['m:m'][0]['#text'].lower()].append(word['m:m'][0]["@baseForm"])
                                        #print(word['m:m'][0]['#text'].lower())
                                        morphemes.append(word['m:m'][0]['#text'].lower())
                                        #print(word['m:m'][0]['#text'].lower(),"\t", "type=",word['m:m'][0]["@type"],"corresp=",word['m:m'][0]["@corresp"],"\t", word['m:m'][0]["@baseForm"])

                                    except:
                                        continue
                            break

                    except:
                        try:
                            print("bad morpheme-type2:",phrase["m:w"]["m:m"])
                        except:
                            print("bad morpheme:", word)
                    print("SF:",''.join(morphemes))
                    fp.write(''.join(morphemes)+"\n")
        return AllData

LENZ=xml_iteration(AUGU,xml_augu,"augu_todo.txt")