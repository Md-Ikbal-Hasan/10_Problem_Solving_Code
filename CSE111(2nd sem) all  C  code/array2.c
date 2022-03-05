#include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("enter the numbers of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d",a[i]);
    }
}
