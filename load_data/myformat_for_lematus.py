
"""WRITE CORPUS DATA TO LEMATUS FILE FORMAT"""
import trim_context

words=pool
n=5
def get_lematus(phrases,outfile):
with open(outfile,"w") as of:
    print("LINE",line,count,"\n\n")
    for i,line in enumerate(phrases):
            count += 1
            print("WORD: ",word, ", count: ",count,"\n")
            try:
                lc=(e,line[:i])
                rc=(e,line[i+1:])
                # split lc - which is a string - on " " and clean
                rc=rc.split(" ")
                lc=lc.split(" ")
                clean_rc= [i for i in rc if i]
                clean_lc= [i for i in lc if i]

                #left context has s after, rc has s before, add <s>
                clean_lc=[" ".join(i) for i in clean_lc]
                clean_rc=[" ".join(y) for y in clean_rc]
                #COUNT CHARACTERS
                clean_lc=trim_context.trim_context(n,clean_lc,left=True)
                clean_rc=trim_context.trim_context(n, clean_rc)
                lc=[i+" <s>" for i in clean_lc]
                rc=["<s> "+i for i in clean_rc]

                # Now we can flatten in a string to print
                lc=' '.join(lc)
                rc=' '.join(rc)
                word = ' '.join(word)
                print("left context: ",lc)
                print("right context: ",rc)
                of.write("{} {} {} {} {} {} {} {}".format(count,"<w>",lc, "<lc>", word, "<rc>", rc,"</w>\n",))
            except ValueError:
                continue
    return [lc,word,rc]

