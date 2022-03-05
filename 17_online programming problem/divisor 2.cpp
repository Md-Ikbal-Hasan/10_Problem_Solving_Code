//find out divisor......
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int x,root;
   int cnt=0,t,j,i;
   cin>>t;

   for(j=1;j<=t;j++)
    {
        cin>>x;
     root= sqrt(x);
   for(i=1;i<=root;i++)
   {
       if(x%i==0)
        cnt=cnt+2;
        if(i== (x/i))
            cnt--;
   }

 printf("Case %d:%d",j,cnt);
 cnt=0;
   }
    return 0;
}

