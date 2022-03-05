#include<stdio.h>
int main(void)
{
    int n,i=1;
    printf("Enter the total value of the number: ");
    scanf("%d",&n);
    while(i<=n)
    {
       if(i%2==0)
          {
            printf("%d\n",i);
          }
        i++ ;
    }
}

