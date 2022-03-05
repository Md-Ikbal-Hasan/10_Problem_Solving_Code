//generate prime number up to 10^7..
#include<bits/stdc++.h>
using namespace std;
#define mx 10000000
int isp[mx+5];
void sieve()
{
    isp[0]=1;
    isp[1]=1;
    int sq= sqrt(mx);
    for(int i=2; i<=sq; i++)
    {
        if(isp[i]==0)
        {
            for(int j=i*i; j<=mx; j=j+i)
                isp[j]=1;
        }
    }
}

int main()
{
    sieve();
    int x;
    while(cin>>x)
    {
        if(x==0)
            break;

        if(isp[x]==0)
            cout<<"prime"<<endl;
        else if(isp[x==1])
            cout<<"Not prime"<<endl;
    }
    return 0;
}
