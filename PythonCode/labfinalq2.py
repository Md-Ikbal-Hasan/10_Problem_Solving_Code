#17182103317
def SelectionSort(arr):
    val = len(arr)
    #print(f"{arr[val-1]}")
    for value in range(val-1,-1,-1):
        minim = value
        val2 = value
       
        for j in range(value-1,-1,-1):
            if arr[j] < arr[val2]:
                minim = j
                arr[value], arr[minim] = arr[minim], arr[value]
                print(arr)
    return arr

unsorteddata = [77, 33, 44, 11, 88, 22, 66, 55 ]
print(f"Initial data before sorting : {unsorteddata}")

sorteddata = SelectionSort(unsorteddata)
print(f"After sorting, The array is : {sorteddata}")

listofinsert =[]
n = int(input())

for i in range(0, n):
    element = int(input(""))
    listofinsert.append(element)

for i in range(len(listofinsert)):
    sorteddata.append(listofinsert[i])

sorteddata = SelectionSort(sorteddata)
print(f'Final Sorted Array in descending Order:{sorteddata}')
