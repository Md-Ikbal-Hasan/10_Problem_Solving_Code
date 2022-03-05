x = int(input("Enter 1st number: ") )
y = int(input("Enter 2nd number: ") )
s = x+y
print(f'the sum is {s} and mul is {x*y}')

if x>y:
	print(f'{x} is greater than {y}')
elif x<y:
	print(f'{y} is greater than {x}')
else:
	print("Two number are equal")

if x%2==0 :
	print('the number', x, 'is a even number')
elif x%2 !=0:
	print(x ,' is a odd number')




