class Computer:

	def __init__(self,cpu,ram):
		self.cpu = cpu 
		self.ram = ram
		print("constructor calling")


	def config(self):
		print("config is", self.cpu,self.ram)


com1  = Computer("i5",16)
com2 = Computer("Rayzan 3",8)
com1.config()
com2.config()
