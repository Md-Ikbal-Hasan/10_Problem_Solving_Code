i = 5
while i<10:
	if i%2==0:
		print(f"{i} is an even number")
		i = i+1
	else:
		print(f"{i} is a odd number")
		i = i+1

name = ["iqbal","sunny","mubin","alhaj","aminul"]
print(name[0])
print(name[1])

print(name[3:5]) #print the name from index 3 to 4(less than 5)

number = [1,3,4,6,8,9,10]
i = 0
#ln = len(number)
while i<len(number):
	print(number[i])
	i = i+1

number[1] = 2
number[3] = 5

print("after modify the elemnet of list: ")
i = 0
ln = len(number)
while i< ln:
	print(number[i])
	i = i+1

number.append(460)
number.append("end")
number.insert(0,-1)
number.insert(2,2)
print(460 in number)
number.remove(9)
print("again after modify the elemnet of list : ")
print(number)
