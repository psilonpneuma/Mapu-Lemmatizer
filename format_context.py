
"""WRITE CORPUS DATA TO LEMATUS FILE FORMAT"""
import trim_context

"Requires a file with only source phrases, line by line, and an output filename"

outfile="lenzhard.txt"
data_filename="/Users/chiarasemenzin/Desktop/MscProject/Source_target"

n=5
with open(data_filename) as fp:
    with open(outfile,"w") as of:
        count1=0
        count=0
        for line in fp:
            count1+=1
            print("LINE",line,count,"\n\n")
            for word in line.split(" "):
                count += 1
                print("WORD: ",word, ", count: ",count,"\n")
                try:
                    ct=line.split(word)
                    #get context left and right
                    lc=ct[0]
                    rc=ct[1]

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

                    # TODO: now we can flatten in a string to print
                    lc=' '.join(lc)
                    rc=' '.join(rc)
                    word = ' '.join(word)
                    print("left context: ",lc)
                    print("right context: ",rc)
                    of.write("{} {} {} {} {} {} {} {}".format(count,"<w>",lc, "<lc>", word, "<rc>", rc,"</w>\n",))
                except ValueError:
                    continue


