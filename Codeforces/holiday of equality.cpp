#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],mx=0,ans=0,i;
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>=mx)
            mx=arr[i];
    }

   for(i=0;i<n;i++)
   {
       if(arr[i]<mx)
        ans= ans+ (mx-arr[i]);
   }
   cout<<ans<<endl;
    return 0;
}

