#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+n);
       // cout<<"max="<<arr[n-1]<<" "<<"min="<<arr[0]<<endl;
        int ans= (arr[n-1] - arr[0]) * 2;
        cout<<ans<<endl;

    }

    return 0;
}
