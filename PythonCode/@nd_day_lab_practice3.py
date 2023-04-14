# Question no 1.........
"""
def pattern(n):
    for i in range(1,n+1):
        for j in range(1,i+1):
            print(j,end="")
        print("\r")
pattern(4)
"""

# Question no 2.........
"""
list1 = []
sum  = 0
for i in range(10):
    element = int(input())
    list1.append(element)
    sum = sum + list1[i]

average  = sum/10
print(f'the sum of all element is : {sum}')
print(f'average of the element : {average}')
"""

# Question no 3..........
"""
def pattern(n):
    for i in range(1,n+1):
        for j in range(1,i+1):
            print('*',end="")
        print("\r")
pattern(4)
"""


# Question no 4.......

even = []
n = int(input("Input number of terms: "))

upper_limit = n*2
sum_of_even = 0
for i in range(2,upper_limit+1, 2):
    even.append(i)

sum_of_even = sum(even)
print(f'the even number are :{even} ')
print(f'the sum of even numbers are upto {n} terms : {sum_of_even}')

