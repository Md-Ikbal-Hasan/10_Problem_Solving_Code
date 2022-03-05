class Person:
	def __init__(self,person_name,id,dept,intk,sec):
		self.Name = person_name
		self.ID = id
		self.Department = dept
		self.Intake = intk
		self.Section = sec
	def get_name(self):
		print(self.Name,self.ID,self.Department,self.Intake,self.Section)


person1 = Person("Iqbal",317, "CSE",38,7)
person1.get_name()
print(person1.ID)