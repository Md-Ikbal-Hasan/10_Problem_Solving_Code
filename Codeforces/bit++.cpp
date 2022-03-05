#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0,i,n;
    string str;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str;
        if(str[1]=='+' || str[3]=='+')
           ans++;
        else if(str[1]=='-' || str[3]=='-')
           ans--;
    }
    cout<<ans<<endl;

    return 0;
}

