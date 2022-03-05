
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,i;
    cin>>t;
    while(t--)
    {
        
           cin>>a>>b>>c>>d;
            if(a==b && b==c && c==d && d==a)
            {
                cout<<"square"<<endl;
            }
            else if((a==c && b==d)||(a==b && c==d)||(b==c && a==d))
            {
               
                cout<<"rectangle"<<endl;
            }
            else if(a<=b+c+d && b<=a+c+d && c<=a+b+d && d<=a+b+c)
            {
               
                cout<<"quadrangle"<<endl;
            }
            else
            {
               
                cout<<"banana"<<endl;
            }
        
    }
 
    return 0;
}