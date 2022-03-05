for i in range(1,10,1):
	print(i) #it print from 1 to 9 (less than to 10) and increased by 1

number = [9,8,7,6,5,4,3,2,1]

print("number array: ")
for i in range(0,9,2): #but how to write , for(i = 9; i>=0 ;i--) in python
	print(number[i])

arr = [2,4,6,8,10,12,14,16,18,20]
i = 9
print("arr : ")
for num in range(i,-1,-1):
	print(arr[i])


""""
suppose an array = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
print those element whose are even number from array using for loop
and print those even number whose are in between index s and e. suppose s =3 , e = 9

"""
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
	

'''
list1 = []
n = int(input("number of element: "))
print(f'Enter the {n} element: ')
for i in range(n):
    element = int(input())
    list1.append(element)



position = int(input("Enter the location for inserting value: "))
value = int(input("Enter the value that you want to insert : "))
print(f'the list before insert the value {list1}')

length = len(list1)
if position>=0 and position<=length:
  j = n -1
  list1.append(0)
  while j >= position -1 :
    list1[j + 1] = list1[j]
    j = j - 1
else:
  print("out of size. plz enter valid position next time")


list1[position-1] = value
print(f'the list after insert the value {list1}')

'''

