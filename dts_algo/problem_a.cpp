#include <bits/stdc++.h>
using namespace std ;
int PrimeFactorisation(int x) {
    vector <int> pf ;
    for(int i = 2 ; i * i <= x ; i++) {
        if(x % i == 0) {
            while(x % i == 0) {
                x /= i ;
                pf.push_back(i) ;
                break; // find minimum prime factor only
            }
        }
    }
    if(x != 1)
        pf.push_back(x) ;

    return pf[0]; // return minimum prime factor only
}


int main() { 

    int t,n;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        int a[n+1];
        a[0] = 0 , a[1] = 0;
       for(int j=2; j<=n; j++)
       {
        int factor = PrimeFactorisation(j);
        a[j] = a[j-1] + factor;
       }


       cout<<a[n]<<endl;

    }
    
       
    return 0 ;
}

/*
pip install matplotlib
pip install tensorflow
pip install opencv
pip install pillow



*/