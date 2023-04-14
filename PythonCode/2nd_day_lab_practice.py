
# Array related programming exercise 1..........
list1 = []
n = int(input("number of element: "))
for i in range(n):
    element = int(input())
    list1.append(element)

print(f'Expected output(sum of all element): {sum(list1)} ')

# Array related programming exercise 2..............
list1 = []
n = int(input("number of element: "))
for i in range(n):
    element = int(input())
    list1.append(element)
max_number =list1[0]
min_number = list1[0]

for i in range(n):
    if max_number<list1[i]:
        max_number = list1[i]
    if min_number> list1[i]:
        min_number = list1[i]

print(f'max element is : {max_number} ' )
print(f'min element is : {min_number} ' )

# Array related programming exercise 3............
list1 = []
x = int(input("input the size of array : "))
print(f'Input {x} element in the array: ')
for i in range(x):
    element = int(input())
    list1.append(element)

lowest = list1[0]
lowest2 = None
for item in list1[1:]:
    if item < lowest:
        lowest2 = lowest
        lowest = item
    elif lowest2 == None or lowest2 > item:
        lowest2 = item

print(f'the second smallest element in the array is : {lowest2}')

# Array related programmihng exercise 4............
"""
list2 = []
x = int(input("number of element: "))
for i in range(x):
    element2 = int(input())
    list2.append(element2)
even = []
odd = []
for i in range(x):
    if list2[i]%2==0:
        even.append(list2[i])
    elif list2[i]%2 != 0:
        odd.append(list2[i])

print(f'the even numbers are : {even}')
print(f'the odd numbers are: {odd}')
"""