#include<stdio.h>
int main(void)
{
    int n,i,prime=1;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=2;i<=n-2;i++)
    {
        if(n%i==0)
        {
            prime=0;
            break;
        }
    }
 if(prime==1)
 {
     printf("prime");
 }

 else
    {
        printf("Not prime");

    }
 }
