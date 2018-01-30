def test1(x):
	print('From func before',x,' ',id(x))
	global y
	y = 10
	print('From func y',y,' ',id(y))
	x = 2
	print('From func after',x,' ',id(x))
	return x

x=20
print('From main before',x,' ',id(x))
x=test1(x)
print('From main after',x,' ',id(x))
y=2
print('From main after Y',y,' ',id(y))
