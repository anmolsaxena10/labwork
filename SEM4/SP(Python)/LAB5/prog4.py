class Exam:
	def __init__(self, sub1, sub2, sub3):
		self.sub1 = sub1
		self.sub2 = sub2
		self.sub3 = sub3
	
	def __lt__(self, other):
		return(self.sub1+self.sub2+self.sub3 < other.sub1+other.sub2+other.sub3)
	
	def __gt__(self, other):
		return(self.sub1+self.sub2+self.sub3 > other.sub1+other.sub2+other.sub3)
	
	def __eq__(self, other):
		return(self.sub1+self.sub2+self.sub3 == other.sub1+other.sub2+other.sub3)
	
ex1 = Exam(10,20,30)
ex2 = Exam(20,30,4)

print(ex1 > ex2)
print(ex1 < ex2)
print(ex1 == ex2)
