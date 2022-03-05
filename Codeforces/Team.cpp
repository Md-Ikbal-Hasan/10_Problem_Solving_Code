#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,x,y,z,cnt=0;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>x>>y>>z;
       if( (x==1 && y==1) || (y==1 && z==1) ||(x==1 &&z==1)||(x==1&&y==1&z==1))
       {
           cnt++;
       }
   }

    printf("%d\n",cnt);


 return 0;
}
