#practice problem 1.......................
"""
def second_smallest_number(list2):
    lowest = list2[0]
    lowest2 = None
    for item in list1[1:]:
        if item < lowest:
            lowest2 = lowest
            lowest = item
        elif lowest2 == None or lowest2 > item:
            lowest2 = item
    print(f'the second smallest element in the array is : {lowest2}')


list1 = []
x = int(input("input the size of array : "))
print(f'Input {x} element in the array: ')
for i in range(x):
    element = int(input())
    list1.append(element)

second_smallest_number(list1)
"""


#practice problem 2...........................
def sorted_number(mylist2):
    new_list = []
    while mylist2:
        min = mylist2[0]
        for x in mylist2:
            if x < min:
                min = x
        new_list.append(min)
        mylist2.remove(min)

    print(new_list)


mylist = []
x = int(input("input the size of array : "))
print(f'Input {x} element in the array: ')
for i in range(x):
    element = int(input())
    mylist.append(element)

sorted_number(mylist)

#practice problem 3...........................
'''
n = 5
position = 10
for x in range(n,position ,1):
  print(x)
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



