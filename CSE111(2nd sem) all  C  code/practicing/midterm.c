#include<stdio.h>
int main(void)
{
    int i,n,mul=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        mul= mul*(i*i*i);
    }
    printf("multiplication of series: %d",mul);

}
