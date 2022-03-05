class A:
	def feature1(slef):
		print("feature 1 is working")

	def feature2(slef):
		print("feature 2 is working")



class B(A): # inherit the property of A into B
	def feature3(slef):
		print("feature 3 is working")

	def feature4(slef):
		print("feature 4 is working")


class C(B):
	def feature5(slef):
		print("feature 5 is working")

class D():
	def feature6(slef):
		print("feature 6 is working")

class E(A,D):#A & D class has no relation.but Class E inherit from both A and D. This is multiple inheritence
	def feature7(slef):
		print("feature 7 is working")





a1 = A()
a1.feature1()
a1.feature2()

b1 = B()
b1.feature3()
b1.feature4()

b1.feature1()

c1 = C()
c1.feature5()
c1.feature2()

e1 = E()
e1.feature7()
e1.feature1()
e1.feature6()





