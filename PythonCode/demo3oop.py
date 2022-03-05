class Student:  # outer class
	def __init__(self,name,rollno):
		self.name = name
		self.rollno = rollno
		self.lap = self.Laptop()



	def show(self):
		print(self.name , self.rollno)
		self.lap.show()
	
	#class inside a class. Inner Class
	class Laptop:
		def __init__(self):
			self.brand = 'HP'
			self.cpu = 'i5'
			self.ram = 8

		def show(self):
			print(self.brand , self.cpu, self.ram)



s1 = Student("iqbal" , 317)
s2  =Student("sunny", 334)


lap1  = Student.Laptop()
lap2  = Student.Laptop()

s1.show()
