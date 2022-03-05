#include<bits/stdc++.h>
using namespace std;
char sign ;
long long num;
int main()
{
   long long n,x,ans=0;;
   cin>>n>>x;
   for(int i=0;i<n;i++)
   {
       cin>>sign>>num;
       if(sign=='+')
        x=x+num;
       else if(sign=='-')
       {
         if(num<=x)
            x=x-num;
         else
            ans++;
       }
   }
    cout<<x<<" "<<ans<<endl;
    return 0;
}

