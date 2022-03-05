#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string str;
    cin>>t;
    while(t--)
    {
        int i,j,n;
        cin>>n;
        cin>>str;
        for(i=0; i<n; i++)
        {
            if(str[i]=='A')
            {
                j = i;
                break;
            }
        }

        int cnt=0,mx=0;
        for(j=j+1; j<n; j++)
        {
            if(str[j]=='P')
            {
                cnt++;
                mx = max(mx,cnt);
            }
            else
            cnt = 0;
        }
        cout<<mx<<endl;
    }
    return 0;
}
