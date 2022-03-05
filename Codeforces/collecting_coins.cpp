#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long a,b,c,n;
    while(t--)
    {
        cin>>a>>b>>c>>n;
        int m = max( a,max(b,c) );
        int rem = (m - a) + (m-b) + (m-c);
        int x = n - rem;
        if(x>=0 && x%3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }



    return 0;
}
