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
    int n;
    int cnt=0;
    while(n!=0)
    {
        int cnt=0;
        cin>>n;
        for(int i=2; i<=n/2; i++)
        {

            if(isp[i]==0)
            {
                if(isp[n-i]==0)
                {

                    cnt++;
                }

            }
        }
        cout<<cnt<<endl;

    }

    return 0;
}

