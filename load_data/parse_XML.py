import xmltodict
from string import punctuation

def read_xml(xml):
    namespaces = {"http://www.w3.org/XML/1998/namespace": "lang", "http://www.tei-c.org/ns/1.0": "m"}
    xml_dict = xmltodict.parse(open(xml, 'rb'),
                               process_namespaces=True,
                               namespaces=namespaces)
    return xml_dict

def xml_iteration(xml,tagged=True):
    with open(xml) as fd:
        xml_dict = xmltodict.parse(fd.read())
        if tagged==True:
            bad_morphemes = []
            phrase_list = []
            lemmas=[]
            for phrase in xml_dict["TEI"]["text"]["body"]["p"]:
                wordlist=[]
                if phrase["@xml:lang"] == "arn":
                    lemata=[]
                    for word in phrase["w"]:
                        try:
                            lemata.append(word["@lemma"])
                            morphemes = []
                        except:
                            lemata.append(phrase['w']['@lemma'])
                            morphemes = []
                        try:
                            for morpheme in word["m"]:
                                try:
                                    morphemes.append(morpheme["#text"].lower())
                                except:
                                    try:
                                        morphemes.append(word['m']['#text'].lower())
                                    except:
                                        try:
                                            morphemes.append(word['m'][0]['#text'].lower())
                                        except:
                                            continue
                                break
                        except:
                            bad_morphemes.append(word)
                        wordlist.append(''.join(morphemes))
                    phrase_list.append(wordlist)
                    lemmas.append(lemata)
            return phrase_list,lemmas
        elif tagged == False:
            phrase_list = []
            for sentence in xml_dict["TEI"]["text"]["body"]["p"]:
                if sentence['@xml:lang'] == 'arn':
                    sent_nopunc = ''.join(c for c in sentence['#text'] if c not in punctuation or c == '-')
                    for word in sent_nopunc.split():
                        if (len(word) > 3):
                            phrase_list.append(word)
            return phrase_list 

#xml_iteration("/Users/chiarasemenzin/Desktop/MscProject/corpus/Untagged/1765FEBR-1.xml",tagged=False)