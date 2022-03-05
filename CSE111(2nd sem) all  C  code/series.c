#include<stdio.h>
int main(void)
{
    int n,sum=0,i;
    printf("Enter the last number of the series:");
    scanf("%d",&n);
    printf("1+2+3.....+%d=",n);
    for(i=1;i<=n;i=i+1)
    {
        sum=sum+i;
    }
    printf("%d",sum);


}
