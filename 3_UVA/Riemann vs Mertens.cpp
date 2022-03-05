#include <bits/stdc++.h>

using namespace std ;

#define mxN 10000000
bool isp[mxN + 5] ;
vector <int> prime ;


void sieve() {
    isp[0] = 1 ;
    isp[1] = 1 ;
    for(int i = 4 ; i <= mxN ; i += 2)
        isp[i] = 1 ;
    for(int i = 3 ; i * i <= mxN ; i += 2) {
        if(isp[i] == 0) {
            for(int j = i * i ; j <= mxN ; j += i + i) {
                isp[j] = 1 ;
            }
        }
    }
    prime.push_back(2) ;
    for(int i = 3 ; i <= mxN ; i += 2)
        if(isp[i] == 0)
            prime.push_back(i) ;
}




int PrimeFactorisation_logN(int x) {
    vector <int> pf ;
    int ans=0, distinct=0;
    for(int i = 0 ; i < prime.size() && prime[i] * prime[i] <= x ; i++) 
    {
        if(isp[x] == 0){
            ans=0;
            break ;}
        
        if(x % prime[i] == 0) {
            int cnt=0;
            while(x % prime[i] == 0) {
                x /= prime[i] ;
                cnt++;
                if(cnt==2)
                {
                ans=0;
                break;
                }
            }
            distinct++;
        }
    }
    if(x != 1)
        pf.push_back(x) ;
        distinct++;
        //checking odd or even number of prime factor...
        if(distinct%2==0)
            ans=1;
        else if(distinct%2==1)
            ans=-1;

        return ans;

    
   
}

int M(int n)
{
    vector<int>mu;
    mu.push_back(0);
    mu.push_back(1);

    for(int i=2;i<=n;i++)
    {
        mu.push_back(PrimeFactorisation_logN(i));
    }

    int len= mu.size();
    for(int i=0;i<=n;i++)
    {
        cout<<i<<" "<<mu[i];
    }


}


int main() { 
    sieve() ; 
    int n ;
    while(cin >> n) {
        M(n);
        cout << "\n" ;
    }
    return 0 ;
}