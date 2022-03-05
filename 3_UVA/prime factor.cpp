#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    vector<long long> prime_fact;
    while(n>0)
    {
        cin>>n;
        if(n==0)
            break;

        else
        {

            long long temp=n;
            n= abs(n);
            long long sq= sqrt(n);

            for(i=2; i<=sq; i++)
            {
                if(n%i==0)
                {
                    while(n%i==0)
                    {
                        n=n/i;
                        prime_fact.push_back(i);
                    }
                }
            }
            if(n!=1)
                prime_fact.push_back(n);

            cout<<temp<<" = ";
            if(temp<0)
            {
                cout<<-1<<" x ";
                long long sz=prime_fact.size();
                for(i=0; i<sz-1; i++)
                {
                    cout<<prime_fact[i]<<" x ";
                }
                cout<<prime_fact[sz-1];

                prime_fact.clear();

            }
            else if(temp>0)
            {
                long long sz=prime_fact.size();

                for(i=0; i<sz-1; i++)
                {
                    cout<<prime_fact[i]<<" x ";
                }
                cout<<prime_fact[sz-1];

                prime_fact.clear();

            }
        }
    }



    return 0;
}
