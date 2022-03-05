#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,s=0,h=0,i,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>x>>y;
            if(x==1)
                s++;
            else if(y==1)
            h++;

        }
        if(h>s)
            cout<<"Case "<<i<<": HM"<<endl;
        else
           cout<<"Case "<<i<<": SI"<<endl;
        s=0,h=0;

    }



    return 0;
}
