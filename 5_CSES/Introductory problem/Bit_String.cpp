#include<bits/stdc++.h>
const long long mod = 1000000007;
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long result = 2;
    for(int i=1; i<n ;i++)
    {
        result = result *2 ;
        result = result % mod;
    }
    cout<<result<<endl;
    return 0;
}


