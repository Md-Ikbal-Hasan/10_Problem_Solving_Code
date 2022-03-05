#include<bits/stdc++.h>
using namespace std;

#define mxn 20000005
bool isp[mxn+5];
vector <int> prime;

void sieve()
{

    isp[0] = 1;
    isp[1] = 1;
    for(int i=4; i<= mxn; i += 2)
    {
        isp[i] = 1;
    }
    for(int i=3; i*i<=mxn; i = i+2)
    {
        if(isp[i]==0)
        {
            for(int j = i*i; j<=mxn ; j = j+i+i)
            {
                isp[j] = 1;
            }
        }
    }
    prime.push_back(2);
    for(int i=3; i<=mxn; i = i+2)
    {
        if(isp[i]==0)
            prime.push_back(i);
    }
}
 vector<  pair<int, int>  > twinprime ;
void twin()
{

    int len = prime.size();
    for(int i=0 ; i<len-1 ; i++)
    {
        /*if the difference of two prime number is two then push it*/
        if( abs(prime[i] - prime[i+1]) == 2 )
        {
            twinprime.push_back( make_pair( prime[i], prime[i+1] ) ) ;
        }

    }
}

int main()
{
    sieve();
    twin();

    int n;
    while(cin>>n)
    {
        cout<<"("<<twinprime[n-1].first<<", " <<twinprime[n-1].second<< ")" <<"\n";
    }



    return 0;
}
