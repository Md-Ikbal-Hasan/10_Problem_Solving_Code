#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a[100]={6,13,7,2,1,12};
    int n=6,i,j,sum=0;
    printf("%d\n",n);

    for(i=0; i<n; i++)
     {


          sum =sum+a[i];
     }


     printf("%d",sum);

   return 0;
}
