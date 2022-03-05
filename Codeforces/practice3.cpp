#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, ans= 0 ;
    cin>>n;
    int arr[n+1];
    for(int i= 0 ;i<n ; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0 ; i<n ; i++)
    {
        if(arr[i] != -1)
        {
            sum  = sum + arr[i];
        }
        else if(arr[i]==-1)
        {
            if(sum>0)
                sum--;
            else if(sum==0)
                ans++;
        }
    }
    cout<<ans<<endl;




    return 0;
}
