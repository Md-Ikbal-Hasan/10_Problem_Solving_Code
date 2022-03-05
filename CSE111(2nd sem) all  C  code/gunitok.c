#include<stdio.h>
int main(void)
{
    int x,i;
    printf("Enter a number:");
    scanf("%d",&x);
    for(i=x;i<=100;i++)
    {
        if(x%i==0)
        {
            printf("%d\n",i);
        }
    }
}
