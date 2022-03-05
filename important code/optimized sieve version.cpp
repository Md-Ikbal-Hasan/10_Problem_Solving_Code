#include <bits/stdc++.h>
using namespace std ;
#define mx 10000000
bool isp[mx + 10] ;
vector <long long> prime ;
void sieve() {
    isp[0] = isp[1] = 1 ;
    for(long long i = 4 ; i <= mx ; i += 2)
        isp[i] = 1 ;
    for(long long i = 3 ; i * i <= mx ; i += 2) {
        if(!isp[i]) {
            for(long long j = i * i ; j <= mx ; j += i + i) {
                isp[j] = 1 ;
            }
        }
    }
    prime.push_back(2) ;
    for(long long i = 3 ; i <= mx ; i += 2)
        if(!isp[i])
            prime.push_back(i) ;
}
long long prime_factor(long long x) {
    long long sq = sqrt(x) ;
    vector <long long> vec ;
    for(int i = 0 ; i < prime.size() && prime[i] <= sq ; i++) {
        if(x % prime[i] == 0) {
            while(x % prime[i] == 0)
                x /= prime[i] ;
            vec.push_back(prime[i]) ;
        }
    }
    if(x != 1)
        vec.push_back( x ) ;
    if(vec.size() <= 1 )
        return -1 ;
    return vec[vec.size() - 1] ;
}
int main() {
    sieve() ;
    long long n ;
    while(scanf( "%lld" , &n ) == 1) {
        if(n == 0)
            break ;
        n = abs(n) ;
        long long ans = prime_factor(n) ;
        printf( "%lld\n" , ans) ;
    }
    return 0 ;
}
