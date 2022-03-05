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


