#include<stdio.h>
int sum(int arr[],int n)
{
    int i,sumation=0;
    for(i=0;i<n;i++)
    {
        sumation=sumation+arr[i];
    }
    return sumation;
}

int main()
{
   int array[100],i,s,n;
   printf("How many elements:");
   scanf("%d",&n);
   printf("Enter %d element",n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&array[i]);
   }

   s=sum(array,n);
   printf("%d",s);
return 0;
}

