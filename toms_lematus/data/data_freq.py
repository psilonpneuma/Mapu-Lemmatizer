from collections import Counter

lenz="text_lenz"
words=[]
with open(lenz, "r") as lz:
	for word in lenz:
		words.append(word)

counts = Counter(words)
print(counts)
# Counter({'apple': 3, 'egg': 2, 'banana': 1})

def lexical_diversity(text):
	return len(set(text)) / len(text)

def percentage(count, total):
	return 100 * count / total