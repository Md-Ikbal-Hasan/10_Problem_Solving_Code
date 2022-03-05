#include<stdio.h>

int main()
{
    int n,i,s=0;
    int ar[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
     for(i=0;i<n;i++)
    {
       printf("%d ",ar[i]);
    }


return 0;
}

