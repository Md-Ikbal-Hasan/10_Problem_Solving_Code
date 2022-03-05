//read a number and count the divisor of those number perfectly
//it's work for N<=10^14
#include<bits/stdc++.h>
using namespace std;
void divisor(long long n)
{
    vector<long long> div;
    div.push_back(n);//n is divisor of itself.so in the begining cnt=1
    int cnt = 1;
    int sq = sqrt(n);
    for(int i = 2; i<=sq; i++)
    {
        if(n%i==0)
        {
            div.push_back(i);
            div.push_back(n/i);
            cnt = cnt+2;
        }
    }
    if(sq*sq==n)
    {
        cnt--;
        div.pop_back();
    }

    //sort(div.begin(),div.end());
    cout<<"Number of divisor: "<<cnt<<endl;
    for(int i = 0; i<cnt; i++)
    {
        cout<<div[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    long long n;
    cin>>n;
    divisor(n);

    return 0;
}
