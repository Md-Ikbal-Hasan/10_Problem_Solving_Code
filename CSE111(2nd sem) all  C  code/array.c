#include<stdio.h>

int main()
{
   int i, arr[50], sum=0, num;

   printf("Enter no of elements :");
   scanf("%d", &num);


   printf("\nEnter the values :");
   for (i = 0; i < num; i++)
   {
      scanf("%d", &arr[i]);
      sum=sum+arr[i];
   }
   for (i = 0; i < num; i++)
   {
     printf("\narr[%d]= %d",i,arr[i]);

   }
printf("\nSum=%d",sum);



   return (0);
}
