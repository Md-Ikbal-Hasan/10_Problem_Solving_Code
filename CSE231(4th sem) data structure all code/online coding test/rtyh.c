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
        s=s+ar[i];
    }

print("%d",s);
return 0;
}
