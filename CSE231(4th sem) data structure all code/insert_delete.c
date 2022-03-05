
#include<stdio.h>
int findElement(int arr[], int capacity, int key);
int deleteElement(int arr[], int capacity, int key);
int insertSorted(int arr[], int n, int key, int capacity)
{

    printf("\n Before Insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d  ", arr[i]);

    printf("\nEnter a key that you want to insert:");
    scanf("%d",&key);

    if (n >= capacity)
       return n;
       else
       arr[n]=key;

     printf ("\n After Insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d  ",arr[i]);
}
//int findElement(int arr[], int capacity, int key);
int deleteElement(int arr[], int capacity, int key)
{

    int pos = findElement(arr, capacity, key);

    if (pos == - 1)
    {
        printf("Element not found");
        return capacity;
    }


    int i;
    for (i = pos; i < capacity - 1; i++)
        arr[i] = arr[i + 1];

        printf("\nArray after deletion\n");
    for (i = 0; i < capacity -1; i++)
      printf("%d  ", arr[i]);
}

int findElement(int arr[], int capacity, int key)
{
    int i;
    for (i = 0; i < capacity; i++)
        if (arr[i] == key)
            return i;

    return - 1;
}


int main()
{
    int arr[20] = {12, 16, 20, 40, 50, 70,80};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 7;
    int i,key,cho,call;
    printf("1.Insert\n 2.Delete\n");
    scanf("%d",&cho);

    switch(cho)
    {
    case 1:
         int call= insertSorted(int arr[],int n,int key,int capacity);
        break;

    case 2:
        int call= deleteElement(int arr[], int capacity,  int key);
        break;

    default:
        printf("Wrong input");
    }

    return 0;
}

