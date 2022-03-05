#include<stdio.h>
int main(void)
{
    int i,fact=1,n,j;
    printf("Enter any positive number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            fact=1;
            for(j=1;j<=i;j++)
            {
                fact= fact*j;
            }
        }
         printf("%d\n",fact);
        }
    }


