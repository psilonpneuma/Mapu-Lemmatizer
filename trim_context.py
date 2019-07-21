n=10
ml=["prova","diocanaglione","parole"]

# Implemented for right and left context
# for left context, set left=True > reverse list

def trim_context(n,mylist,left=False):
    c=0
    words=[]
    if left==True:
        mylist=",".join(mylist)
        mylist=mylist[::-1]
        mylist=mylist.split(",")
    for word in mylist:
        if word != " ":
            c += len(word)
            words.append(word)
            print(c,"word:",word)
            if c > n:
                print("trimming input...")
                break
    factor=c-5
    if factor>0:
        all_char=(", ".join(words))
        print(all_char[:-factor])
        final=all_char[:-factor].split(", ")
        if left == True:
            print("final",[i[::-1] for i in final])
        else:
            print("final",[i for i in final])
    else:
        final=words
    return final
trim_context(n,ml,left=True)
trim_context(n,ml)
