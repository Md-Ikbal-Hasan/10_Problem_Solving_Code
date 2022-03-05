#include<stdio.h>
int main(void)
{
    int i,x;
    printf("Enter a number:");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
      if(i%3!=0 && i%5==0)
        {
        break;
        }
     else if(i%3==0 && i%5!=0)
     {
         break;
     }
       else
            printf("%d",i);

    }
}



