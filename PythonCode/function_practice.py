def base():
    print("hello world")
base()

def add(a,b):
    print("addition = ", a+b)
add(20,50)



def area_volume(a):
    area = a*a
    volume  = a*a*a
    return  area, volume ,"the area and volume are calculated : "

print(area_volume(5))

"""
def sum(x, *args):
    print("value of x : ", x)
    print(args)
    sum1 = x + sum(args)
    print(sum1)
sum(10,20,30,40,50)
"""