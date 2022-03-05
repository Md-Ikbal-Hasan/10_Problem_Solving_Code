#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[45];
    for(int i = 0; i<4 ; i++)
    {
        cin>>arr[i];
    }
    string s; int ans = 0;
    cin>>s;
    for(int i = 0; i< s.length(); i++)
    {
        int x = s[i] -48;
        ans  = ans + arr[x-1];
       // cout<<x<<endl;

    }
    cout<<ans<<endl;

    return 0;
}
