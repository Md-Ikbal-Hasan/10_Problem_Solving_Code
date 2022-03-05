#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,sum = 0;
    cin>>n;
    long long arr[n+1];
    long long ans = 0;
    for(int i=0; i<n-1; i++)
    {
        cin>>x;
        sum += x;
    }
    ans = ( n*(n+1) / 2) - sum ;
    cout<<ans<<endl;

}

