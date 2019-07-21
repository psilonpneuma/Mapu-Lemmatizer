# -*- encoding: utf-8 -*-
import collections

def process_spelling(datadict,change):
    normalized_d=collections.OrderedDict()
    for key,value in datadict.items():
        normalized_d[key]=[]
        if len(datadict.values())==2: #it's tagged file: 2 list of lists
            print("PROCESSING TAGGED FILE")
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
            normalized_d[key].append(pr_sources_all)
            normalized_d[key].append(pr_targets_all)
        else: # just a list of phrases at each key
            print("PROCESSING UNTAGGED FILE")
            phr_norm_all= process_pool(value,change)
            normalized_d[key]=phr_norm_all#took out []
    return normalized_d


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


