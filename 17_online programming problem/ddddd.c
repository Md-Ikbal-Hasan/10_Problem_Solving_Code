#include<stdio.h>
int main()
{
   int i,num[6];
   for(i=0;i<6;i++)
   {
       scanf("%d",&num[i]);
   }

   printf("values are:\n");

   for(i=0;i<6;i++)
   {
      printf("%d ",num[i]);
   }


    return 0;
}

