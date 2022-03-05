#include<stdio.h>
int main()
{
    int i,j,k,n,s=0,st=1,l;

    printf("enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i;k++)
        {
            for(j=1;j<=s;j++)
            {
                printf(" ");
            }

    for(l=1;l<=i;l++)
    {
        printf("* ");
    }
    printf("\n");
    }
    s=s+st;
    st++;

    }
    return 0;
}
