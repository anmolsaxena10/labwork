from prog1 import Counter

class CountDown(Counter):
	def __init__(self):
		Counter.__init__(self)
	def countDown(self):
		self.count-=1
		return self.count

cd = CountDown()
print(cd.countUp())
print(cd.countDown())
