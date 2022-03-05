class Human:
	def __init__(self,gender,name,country):
		self.gender = gender
        self.name = name
        self.country = country

    def get_info(self):
    	print(self.gender,self.name)

obj1 = Human("male","iqbal","BD")
obj1.get_info()