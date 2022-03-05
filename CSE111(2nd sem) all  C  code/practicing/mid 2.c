#include<stdio.h>
int main(void)
{
    int num,count=0,i;
    printf("Enter any positive number : ");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
   if(count==0)
        printf("Prime number");
         else
    printf("Not prime number");

}

