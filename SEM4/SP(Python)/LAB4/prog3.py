def isPrime(n):
	if n<2:
		return False
	i=2
	while n>(i**2-1):
		if n%i == 0:
			return False
		i+=1
	return True

start = int(input('Enter first number: '))
end = int(input('Enter last number: '))

for i in range(start, end+1):
	if(isPrime(i)):
		print(i)

