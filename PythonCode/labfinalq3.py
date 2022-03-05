def prime(num):
	if num > 1:

		for i in range(2, int(num / 2) + 1):
			if (num % i) == 0:
				return False
				break
		else:
			return True

	else:
		False



def perfect_number(n):
    sum = 0
    for x in range(1, n):
        if n % x == 0:
            sum += x
   
    if sum==n:
    	return True
    elif sum!=n:
    	return False


num = int(input())
for i in range(0,num):
	number = int(input("enter the number of element:"))
	if prime(number)==True:
		print(f"{number} is a prime number")
	elif perfect_number(number)==True:
		print(f"{number} is a perfect number")
	else:
		print(f"{number} is not a prime number and not a perfect number")
