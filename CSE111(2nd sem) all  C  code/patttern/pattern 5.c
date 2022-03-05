#include<stdio.h>
int main(void)
{
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    printf("\n");
    }
}
