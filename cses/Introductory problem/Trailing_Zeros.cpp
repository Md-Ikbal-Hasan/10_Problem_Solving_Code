//number of trailing zeros of n !
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, ans = 0;
    cin>>n;
    for(int i=5; i<=n; i=i*5)
    {
        ans = ans + floor(n/i);
    }
    cout<<ans<<endl;
    return 0;
}
