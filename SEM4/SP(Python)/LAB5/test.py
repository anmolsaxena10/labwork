class Counter(object):
	__objectCount = 0
	def __new__(cls):
		cls.__objectCount+=1
		print(cls.__objectCount)
		
		#return super().__new__(cls)

Counter()
Counter()
Counter()
