#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,x;
    vector<long long> prime_fact;

    while(scanf("%lld",&x)==1)
    {

        if (x==0)
            break;
        else
        {
            n=x;
            long long sq= sqrt(n);
            for(int i=2; i<=sq; i++)
            {

                if(n%i==0)
                {

                    while(n%i==0)
                    {
                        n=n/i;

                    }
                    prime_fact.push_back(i);
                }

            }
            if(n!=1)
                prime_fact.push_back(n);
            cout<<x<<" : "<<prime_fact.size()<<endl;
        }

        prime_fact.clear();
    }




    return 0;
}
