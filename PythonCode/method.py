def greet():
	print("Hello Sir")
	print("Welcome to Bangladesh")

greet()



def greet2(first_name, last_name):
	print(f"Hello {first_name} {last_name} ")
	print("Welcome to Bangladesh")

greet2("Iqbal","Hasan")



def sum(x, y=5):
	return x+y

print(sum(12,15)) # x = 12, y = 15
print(sum(15)) #if i dont pass the value of y then by default y=5 in sum method


def multiplication(*numbers):
	total = 1
	for number in numbers:
		total *= number
	return total

print(f'the multiplicatipon of these numbers is : {multiplication(1,2,3,4,5)} ')


def save_user(**user): #this is called dictionary. when we use double asterics it can receive various
	print(user)        #type of object 
	print(user["id"])
	print(user["name"])

save_user(id=317, name ="Iqbal" ,dept = "cse", section = 7) #dictiobary

