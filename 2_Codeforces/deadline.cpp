#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        if(d<=n)
            cout<<"YES"<<endl;
        else
        {
            long long sq = sqrt(d);
            int flag = 0;
            int day = 0;
            for(int i=1; i<=sq; i++)
            {


                day = i + ceil( d/(i+1) );
                if(day <= n)
                {
                    flag = 1;
                    break;
                }
                else
                {

                }
                cout<<"day:"<<day<<endl;
                day = 0;
            }
            cout<<day<<endl;

            if(flag ==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }
    }



    return 0;
}
