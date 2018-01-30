class Counter:
	def __init__(self):
		self.count=0
		
	def countUp(self):
		self.count+=1
		return self.count

counter = Counter()
print(counter.countUp())
print(counter.countUp())
print(counter.countUp())
