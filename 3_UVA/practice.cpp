#include<bits/stdc++.h>
using namespace std;

void  prime_fact(long long n) {
    long long sq = sqrt(n);
    vector<long long> vec;
    for(long long i=2; i<=sq; i++) {
        if(n % i==0) {
            while(n % i == 0) {
                n = n / i;
                vec.push_back(i);
            }
        }
    }
    if(n != 1)
        vec.push_back(n);
    long long sz=vec.size();
    if(sz == 1)
        cout<<"-1"<<endl;
    else
        cout<<vec[sz-1]<<endl;
    vec.clear();
}
int main() {
    long long  n;
    while(cin>>n) {
        if(n==0)
            break;
        else
            prime_fact(n);
    }
    return 0;
}
