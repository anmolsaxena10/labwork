def varSum(a, *args):
	sum = a
	for b in args:
		sum = sum + b
	return(sum)

print(varSum(1))
