#include <bits/stdc++.h>

using namespace std ;

#define mxN 10000000
bool isp[mxN + 5] ;
vector <int> prime ;

// Complexity of this sieve O(NloglogN) which is faster than O(NlogN)
// Generating all prime numbers upto N and storing them in prime vector..
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

// factorising the number x..
// Complexity O(sqrtN)in worst case per call..but faster 50 times than without prime method..
// but actually in average and best its O(logN).
// this will work while N <= 10^14
void PrimeFactorisation_sqrtN(long long x) {
    vector <long long> pf ;
    for(long long i = 0 ; i < prime.size() && prime[i] * prime[i] <= x ; i++) {
        if(x % prime[i] == 0) {
            while(x % prime[i] == 0) {
                x /= prime[i] ;
                pf.push_back(prime[i]) ; // storing in pf..
            }
        }
    }
    if(x != 1)
        pf.push_back(x) ;
    
    // printing the prime factors..
    for(long long i = 0 ;  i < pf.size() ; i++) {
        cout << pf[i] << " " ;
    }
}

int main() { 
    sieve() ; // calling the sieve..
    long long n ;
    while(cin >> n) {
        PrimeFactorisation_sqrtN(n) ; // getting the prime factors of n..
        cout << "\n" ;
    }
    return 0 ;
}