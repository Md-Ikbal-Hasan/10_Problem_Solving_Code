#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==1)
            flag=1;
    }

    if(flag==0)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;

    return 0;
}
