#include<bits/stdc++.h>
using namespace std;
bool isp[50010] ;
vector <long long> vec ;
void sieve()
{
    isp[1] = 1 ;
    isp[0] = 1 ;
    for(int i = 4 ; i <= 50000 ; i += 2)
        isp[i] = 1 ;
    int sq = sqrt(50000) ;
    for(int i = 3 ; i <= sq ; i += 2) {
        if(isp[i] == 0) {
            for(int j = i * i ; j <= 50000 ; j += i + i )
                isp[j] = 1 ;
        }
    }
    vec.push_back(2) ;
    for(int i = 3 ; i <= 50000 ; i += 2) {
        if(isp[i] == 0)
            vec.push_back(i) ;
    }
}
int main()
{
    sieve() ;
    long long n,i;
    vector<long long> prime_fact;
    while(scanf("%lld",&n) == 1)
    {

        if(n==0)
            break;

        else
        {

            long long temp=n;
            n= abs(n);
            long long sq= sqrt(n);

            for(i=0; i< vec.size() && vec[i] <= sq ; i++)
            {
                if(n%vec[i] == 0)
                {
                    while(n%vec[i] ==0)
                    {
                        n=n/vec[i];
                        prime_fact.push_back(vec[i]);
                    }
                }
            }
            if(n!=1)
                prime_fact.push_back(n);

            //cout<<temp<<" = ";
            printf("%lld = " , temp) ;

            if(temp<0)
            {
                //cout<<-1<<" x ";
                printf("-1 x ") ;
                long long sz=prime_fact.size();
                for(i=0; i<sz-1; i++)
                {
                    printf("%lld x ",prime_fact[i]) ;
                    //cout<<prime_fact[i]<<" x ";
                }
                //cout<<prime_fact[sz-1];
                printf("%lld",prime_fact[sz - 1]) ;
                prime_fact.clear();

            }
            else if(temp>0)
            {
                long long sz=prime_fact.size();

                for(i=0; i<sz-1; i++)
                {
                    printf("%lld x ",prime_fact[i]) ;
                    //cout<<prime_fact[i]<<" x ";
                }
                //cout<<prime_fact[sz-1];
                 printf("%lld",prime_fact[sz - 1]) ;
                prime_fact.clear();

            }
        }
        printf("\n") ;
        //cout<<endl;
    }



    return 0;
}
