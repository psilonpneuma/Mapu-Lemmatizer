i="dev-sources"
o="dev-targets"

with open(i, 'r') as file1:
    with open(o, 'r') as file2:
        same = set(file1).intersection(file2)

same.discard('\n')

print (len(same))