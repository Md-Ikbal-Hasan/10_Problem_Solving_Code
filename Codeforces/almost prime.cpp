#include<bits/stdc++.h>
using namespace std;
#define mx 3000
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
    cin>>n;



    int ans=0;
    for(int j=2; j<=n; j++)
    {
        int cnt=0;
        for(int i=2; i<=j/2; i++)

        {
            if(j%i==0)
            {
                if(isp[i]==0)
                    cnt++;
            }


        }
        if(cnt==2)
            ans++;
    }

    cout<<ans<<endl;


    return 0;
}
