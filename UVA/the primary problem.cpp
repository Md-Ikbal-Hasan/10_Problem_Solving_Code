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

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;


        int cnt=0,x,y;
        for(int i=2; i<=n/2; i++)
        {
            if(isp[i]==0 && isp[n-i]==0)
            {
                cnt++;
                x=i;
                y=n-i;
                break;
            }
        }
        if(cnt==0)
            cout<<"NO WAY!"<<endl;
        else if(cnt==1)
        {
            cout<<n<<":"<<endl<<x<<"+"<<y<<endl;

        }
    }

    return 0;
}
