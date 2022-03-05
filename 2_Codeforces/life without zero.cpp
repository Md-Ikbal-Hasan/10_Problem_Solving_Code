#include<bits/stdc++.h>
using namespace std;
long long  rem_zero(long long s);
int main()
{
    long long a,b,s1,s2;
    cin>>a>>b;
    s1= a+b;

    s1= rem_zero(s1);
    a= rem_zero(a);
    b= rem_zero(b);
    s2=a+b;
    if(s1==s2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

 return 0;
}

long long rem_zero(long long s)
{
  long long p=0;
    while(s)
    {

        if(s%10!=0)
        {
            p= p*10 + s%10;
        }
         s= s/10;
    }



    s = p;
    p=0;
    while(s)
    {
         p = p*10 + s%10;
         s= s/10;
    }

    return p;
}
