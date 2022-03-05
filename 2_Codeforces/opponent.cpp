#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d,i,j,flag,cnt=0,res=0;
    cin>>n>>d;
    char s[200];
    for(i=0;i<d;i++)
    {
        cin>>s;
        flag=0;
        for(j=0;j<strlen(s);j++){
            if(s[j]=='0')
                flag=1;
        }
        if(flag==1)
            cnt++;
        else
        {
            res=max(res,cnt);
            cnt=0;
        }
    }


    res=max(res,cnt);
    cout<<res<<endl;
    return 0;
}

