data =  [{"V":"S001"}, {"V": "S002"}, {"VI": "S001"}, {"VI":"S005"}, {"VII":"S005"}, {"V":"S009"},{"VIII":"S007"}]

result = set()

for i in range(0,len(data)):
	for key in list(data[i].keys()):
		result.add(data[i][key])

print(result)