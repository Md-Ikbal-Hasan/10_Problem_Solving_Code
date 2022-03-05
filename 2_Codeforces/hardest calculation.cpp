#include<bits/stdc++.h>
using namespace std;
int main()
{
   unsigned long long x,y;
   int t;
   cin>>t;
   while(t--)
   {
       cin>>x>>y;
       if(x%y==0 || y%x==0)
       {
           cout<<"Valid"<<endl;
           cout<<x+y<<endl;
       }
       else
        cout<<"Invalid"<<endl;
   }
    return 0;
}

