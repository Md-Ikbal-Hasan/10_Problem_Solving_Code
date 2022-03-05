#include<stdio.h>
int simpleArraySum(int ar[])
{
   int  sum=0,i;
    for(i=0;i<5;i++)
    {
        sum = sum + ar[i];
    }
    return sum;
}
int main()
{
    int n,i,sum2;
    int ar[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    sum2=simpleArraySum(ar);


printf("%d",sum2);
return 0;
}
