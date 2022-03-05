#include<stdio.h>
int main(void)
{
    int n,i=1,s=0;
    printf("Enter the total value of the number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+i;
        i++ ;
    }
    printf("The sum of the value is:%d",s);

}
