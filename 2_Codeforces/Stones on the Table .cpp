#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int ans=0,n;
    cin>>n>>str;
    int len= str.length();
    for(int i=0;i<len-1;i++)
    {
        if(str[i]==str[i+1])
             ans++;
    }
    cout<<ans<<endl;


    return 0;
}
