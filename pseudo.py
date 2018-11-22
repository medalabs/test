import short_name

#short_name="ABC"
short_name=short_name.get_short_name("mahmoud ben salah")
cin="1234"

def concat(sn,cin):
	return (sn+str(cin))

if __name__=="__main__":
	print(concat(short_name,cin))
