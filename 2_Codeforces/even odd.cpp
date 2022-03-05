#include<bits/stdc++.h>
using namespace std;
long long int n,k;
int main()
{
    long long n,k,ans;
    cin>>n>>k;
    if(n%2==1)
    {
        ans= n/2 + 1;//ans = number of odd  ,,,1 3 5 7   2 4 6
        if(k<=ans)
        {
            cout<<2*k -1;
        }
        else
            cout<<(k-ans)*2;
    }
    else
    {
      ans= n/2;     //1 3 5 7 9   2 4 6 8 10
        if(k<=ans)
        {
            cout<<2*k -1;
        }
        else
            cout<<(k-ans)*2;
    }




    return 0;
}
