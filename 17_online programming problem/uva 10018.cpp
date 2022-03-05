#include<stdio.h>
 long long int rev(long long int n)
{
    long long int i;
    i=0;
    while(n>0)
    {
        i=(i*10)+(n%10);
        n=n/10;
    }
    return i;
}
int main()
{
    long long int a,b,cnt=0,t,tc;
    scanf("%lld",&tc);
    for(t=1;t<=tc;t++)
    {
        scanf("%lld",&a);

        b=rev(a);
        a = a+b;
         ++cnt;

         again:
         b = rev(a);
         if(a==b)
         {
              printf("%lld %lld\n",cnt,a);
              break;
         }
         else
           {
             a= a+b;
             ++cnt;
             goto again;

           }

    }
    return 0;
}
