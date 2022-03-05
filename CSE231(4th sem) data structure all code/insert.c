// C program to implement insert   operation in an unsorted array.
#include<stdio.h>

// Inserts a key in arr[] of given capacity. n is current size of arr[]. This
// function returns n + 1 if insertion  is successful, else n.
int insertSorted(int arr[], int n,
                 int key,
                 int capacity)
{

// Cannot insert more elements if n is  already more than or equal to capacity
    if (n >= capacity)
       return n;

    arr[n] = key;

    return n ;
}

// Driver Code
int main()
{
    int arr[20] = {12, 16, 20, 40, 50, 70,80};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 7;
    int i,key;

    printf("\n Before Insertion: ");
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);

    printf("\nEnter a key that you want to insert:");
    scanf("%d",&key);
    //Inserting key
    n = insertSorted(arr, n, key, capacity);

    printf ("\n After Insertion: ");
    for (i = 0; i <= n; i++)
        printf("%d  ",arr[i]);

    return 0;
}
