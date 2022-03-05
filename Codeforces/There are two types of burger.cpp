#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,b,p,f,h,c,i,j;
    cin>>t;
    while(t--)
    {
        cin>>b>>p>>f>>h>>c;
        if(h>c)
        {
            int ans= min(b/2,p);
            b= b - ans*2;
            ans= (ans*h) + min(b/2,f)*c;
            cout<<ans<<endl;


        }
        else
        {
            int ans= min(b/2,f);
            b= b - ans*2;
            ans= (ans*c) + min(b/2,p)*h;
            cout<<ans<<endl;
        }





    }






    return 0;
}
