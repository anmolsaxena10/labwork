ob = open('test1.txt','r')

words = list((ob.read()).split(" "))

arranged = {}

for word in words:
	if word in arranged:
		arranged[word]+=1
	else:
		arranged[word]=1

for word in arranged:
	print(word+" - "+str(arranged[word]))
