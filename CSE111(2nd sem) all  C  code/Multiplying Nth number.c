#include<stdio.h>
int main(void)
{
    int n,i=1,m=1;
    printf("Enter the total value of the number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        m=m*i;
        i++ ;
    }
    printf("The multiplying value is:  %d",m);

}
