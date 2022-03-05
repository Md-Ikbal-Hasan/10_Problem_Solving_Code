array = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
print("array is ", array)
ln =len(array)
print("The length of array is : ",ln)
print("even element of array:")

for i in range(0,ln):
	if array[i] %2 ==0:
		print(array[i])

s = 3
e = 9

print("The even element of index 3 to 9")
for i in range(3,10):
	if array[i] %2 ==0:
		print(f'array[{i}] = {array[i]}')
	
