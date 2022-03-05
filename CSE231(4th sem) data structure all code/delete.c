#include<stdio.h>
int findElement(int arr[], int capacity, int key);

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

    return capacity - 1;
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
    int i;
    int arr[] = {10, 50, 30, 40, 20};

    int capacity= sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Array before deletion\n");
    for (i = 0; i < capacity; i++)
      printf("%d  ", arr[i]);
      printf("\nEnter the element that you want to delete:");
      scanf("%d",&key);

    capacity = deleteElement(arr, capacity, key);

    printf("\nArray after deletion\n");
    for (i = 0; i < capacity; i++)
      printf("%d  ", arr[i]);

    return 0;
}
