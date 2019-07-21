"""

Small script to extract sources and targets in Lematus format

Author: Chiara Semenzin

"""

filename = "/Users/chiarasemenzin/Desktop/MscProject/toms_lematus/data/languages/Mapu-0-char-context/train-sources"

with open(filename) as fp:
    for line in fp:
        line=" ".join(line)
        line=line.lower()
        print(line)