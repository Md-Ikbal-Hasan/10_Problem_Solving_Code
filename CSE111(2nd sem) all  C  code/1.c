#include<stdio.h>
int main(void)
{
    int i,j,n;
    printf("Enter a number : ");
    scanf("%d",&n);

 for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==n ||j==1 ||i==j)
            printf("*");
           else

                printf(" ");



    }
     printf("\n");
    }
}
