//divisor
#include<bits/stdc++.h>
using namespace std;
long long divisor(long long n)
{
    long long i;
    vector<long long> div;
    cin>>n;
    long long sq= sqrt(n);

    for(i=2;i<=sq;i++)
    {
        if(n%i==0)
        {
            div.push_back(i);
            div.push_back(n/i);
        }
    }
    if(sq*sq==n)
        div.pop_back();

}



int main()
{
    long long n,i;
    vector<long long> div;
    cin>>n;
    long long sq= sqrt(n);

    for(i=2;i<=sq;i++)
    {
        if(n%i==0)
        {
            div.push_back(i);
            div.push_back(n/i);
        }
    }
    if(sq*sq==n)
        div.pop_back();

    cout<<n<<" = ";
    for(int i=0;i<div.size();i++)
    {
        cout<<div[i]<<" ";
    }



    return 0;
}
