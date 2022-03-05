//day 20 hackerrank...uncomplete


#include<stdio.h>
int main()
{
    int a[20],n,i,j,numberOfSwaps=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++) {

    //int numberOfSwaps = 0;

    for (int j = 0; j < n - 1; j++) {

        if (a[j] > a[j + 1])
        {
            a[j]= a[j + 1];

             temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;

            numberOfSwaps++;
        }
    }


    if (numberOfSwaps == 0) {
        break;
    }
}
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


    printf("Array is sorted in %d swaps.\n",numberOfSwaps);
    printf("First Element: %d\n",a[0]);
    printf("Last Element: %d",a[n-1]);
    return 0;
}
