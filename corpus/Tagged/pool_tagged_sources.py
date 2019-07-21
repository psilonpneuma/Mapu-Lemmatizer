def pool_tag_data(datadict):
	pool_tagged_sources=[]
	pool_tagged_targets=[]
	for key,value in TAG_DATA.items():
    	sources=value[0]
    	targets=value[1]
    	for i in sources:
        	for word in i:
            	pool_tagged_sources.append(word)
            	pool_tagged_targets.append(word)
    return pool_tagged_sources,pool_tagged_targets