from prog1 import Counter

class CountDouble(Counter):
	def __init__(self):
		Counter.__init__(self)
	
	def countUp(self):
		self.count+=2
		return(self.count)

cd = CountDouble()

print(cd.countUp())
print(cd.countUp())
