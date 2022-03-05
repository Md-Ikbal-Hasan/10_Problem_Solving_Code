#include<bits/stdc++.h>
using namespace std;
long long solve(long long n)
{
    if(n !=1 )
    {
        if(n %2 == 0)
        {
            cout<<n/2<<" ";
            solve(n/2);
        }
        else if(n%2 != 0)
        {
            cout<<(n*3) +1<<" ";
            solve( (n*3) + 1 );
        }
    }
    else if(n==1)
        return 0;

}
int main()
{
    long long n;
    cin>>n;
    cout<<n<<" ";
    solve(n);

}
