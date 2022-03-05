#include<stdio.h>
int main(void)
{
    int n,i=3;
    printf("Enter the total value of the number: ");
    scanf("%d",&n);
    while(i<=n)
    {
       if(i%3==0 &&i%7==0)
          {
            printf("%d\n",i);
          }
        i++ ;
    }
}
