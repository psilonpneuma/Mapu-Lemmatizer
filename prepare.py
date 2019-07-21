with open('0char_source',"r") as fp:
	with open('0char_source2',"w") as o:
			for line in fp:
				o.write(line.lower())
