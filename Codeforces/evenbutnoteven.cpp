#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,sum=0,flag=0,i;
        string str;
        cin>>n;
        cin>>str;
        for(i=0; i<n; i++)
        {
            a = str[i] - '0';
            sum+=a;
        }
        //cout<<sum<<endl;
        for(i = n-1; i>=0 ; i--)
        {
           a =str[i] - '0';
           if(a%2==1 && sum%2==0)
           {
               flag = 1;
               break;
           }
           else
           {
               str.pop_back();
               sum  = sum -a;
           }
        }

        if(flag==1)
            cout<<str<<endl;
        else
            cout<<"-1"<<endl;
    }



    return 0;
}
