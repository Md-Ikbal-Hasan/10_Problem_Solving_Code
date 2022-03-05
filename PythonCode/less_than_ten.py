a  = []
n = int(input("Enter the number of element:"))
print("Enter the element : ")
for i in range(0 , n):
	x = int(input())
	a.append(x)

b = []
for i in range (0,n):
	if a[i]<10:
		b.append(a[i])

print("The element that are less than ten:")
print(b)