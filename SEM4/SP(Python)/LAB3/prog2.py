file1 = open('knapsack.c')
file2 = open('knapsack2.c','w')


lines = list((file1.read()).split('\n'))

for line in lines:
	if line.find('//') != -1:
		line = line[:line.find('//')]
	line = line + '\n'
	file2.write(line)

file1.close()
file2.close()
