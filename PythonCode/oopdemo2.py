class Car:

	wheels = 4  # class variable

	def __init__(self):
		self.mil = 10;
		self.com = "BMW"

c1 = Car()
c2 = Car()

c1.mil = 8

print(c1.com , c1.mil, c1.wheels)
print(c2.com , c2.mil , c2.wheels)

Car.wheels = 5

print(c1.com , c1.mil, c1.wheels)
print(c2.com , c2.mil , c2.wheels)


print("This was instance and class variable example")
print("md Iqbal Hasan")

# comment
