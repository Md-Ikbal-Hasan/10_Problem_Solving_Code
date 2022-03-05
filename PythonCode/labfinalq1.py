"""
Question1
Md Ikbal Hosen
17182103317, 38, 7
"""

n = int(input("enter the number of element:"))
number = []
even =[]
odd = []
pos = []
neg = []
for i in range(0, n): 
    x = int(input()) 
    number.append(x)

for i in range(0, n):
	if number[i] %2==0:
		even.append(number[i])
	if number[i] %2!=0:
		odd.append(number[i])
	if number[i]> 0:
		pos.append(number[i])
	if number[i]<0:
		neg.append(number[i])


print(f"even number are : {even} ")
print(f"odd number are : {odd} ")
print(f"postivie number are : {pos} ")
print(f"Negative number are : {neg} ")
