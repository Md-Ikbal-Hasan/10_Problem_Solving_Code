// C program to implement recursive Binary Search
#include <stdio.h>


int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };

	for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }



	int n = sizeof(arr) / sizeof(arr[0]);
	printf("\n%d \n",n);
	int a=sizeof(arr);
	printf("%d ",a);
	return 0;
}


