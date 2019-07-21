def get_freqs(pool):
    freqs = {}
    for word in pool:
        if word not in freqs:
            freqs[word] = 1
        else:
            freqs[word] += 1
    sorted_fr=sorted(freqs.items(), key=lambda x:x[1])
    sorted_fr.reverse()
    return sorted_fr
