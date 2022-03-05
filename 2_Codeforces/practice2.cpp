#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long arr[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int flag=0;

        for(int i=0; i<n-1; i++)
        {
            if(abs(arr[i] - arr[i+1]) >=2 )
            {
               flag=1;
            }
            else
            {
                flag=0;
            }
        }
        ig(flag==1)
        cout<<


    }

    return 0;
}

