import collections
def process_spelling(datadict,change):
    normalized_d=collections.OrderedDict()
    for key,value in datadict.items():
        normalized_d[key]=[]
        if len(value)==2: #double check, means it's tagged file: two list of lists
            pr_sources_all=[]
            pr_targets_all=[]
            sources=value[0]
            targets=value[1]
            for phrase in sources:
                pr_sources= process_pool(phrase,change)
                pr_sources_all.append(pr_sources)
            for phrase in targets:
                pr_targets= process_pool(phrase,change)
                pr_targets_all.append(pr_targets)
            normalized_d[key].append([pr_sources_all,pr_targets_all])
        else: # just a list of phrases at each key
            ph_norm_all=[]
            for phrase in value:
                phr_norm= process_pool(phrase,change)
                ph_norm_all.append(phr_norm)
            phrases.append(phrase)
            normalized_d[key].append([pr_sources_all,pr_targets_all])
    return normalized_d

change=("ə","ü")

def process_pool(pool,change):
    pool_normalized=[]
    source=change[0]
    target=change[1]
    for s in pool:
        if source in s:
            s=s.replace(source,target)
            pool_normalized.append(s)
        else:
            pool_normalized.append(s)
    return pool_normalized