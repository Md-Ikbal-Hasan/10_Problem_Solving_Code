#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,sum1=0,sum2=0,k=2;
    cin>>n;

    if(n%2==0)
    {
        cout<<n/2;
    }
    else
    {
        cout<<-(n/2+1);
    }
    return 0;
}
