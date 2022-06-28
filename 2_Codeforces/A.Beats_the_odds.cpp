#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        int a[n+1],even = 0, odd = 0 ;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2 == 0) { even++ ; }
            else { odd++ ; }

        }
        int ans = min(even , odd);
        cout<<ans<<endl;
        t--;

    }


    return 0;
}
