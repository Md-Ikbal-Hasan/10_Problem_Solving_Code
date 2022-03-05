#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,p,tot;
    cin>>t;
    for(int i = 1; i<=t; i++)
    {
        cin>>n>>k>>p;
        tot= k+p;
        while(tot>n)//if(tot>n)
            tot=tot-n;

        cout<<"Case "<<i<<":"<<" "<<tot<<endl;
    }

    return 0;
}
