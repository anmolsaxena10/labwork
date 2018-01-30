d = [{'ram':60, 'shyam':70, 'radha':70},
	{'ram':70, 'shyam':80, 'radha':60}
	]
	
D = {}

for i in range(0,len(d)):
	for key in list(d[i].keys()):
		if key in D:
			D[key] = (D[key]+d[i][key])/2
		else:
			D[key] = d[i][key]
print(D)