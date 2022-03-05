#include<stdio.h>
int main(void)
{
int i,n,fact=1;
printf("Enter any positive number: ")  ;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    fact=fact*i;
}
    printf("%d!=%d",n,fact);


}
