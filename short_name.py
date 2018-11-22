def get_short_name(long_name):
	sn=''
	name_words=long_name.split(' ')
	for i in range(len(name_words)):
		sn += name_words[i][0].upper()
	return sn

