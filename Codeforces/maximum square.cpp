#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;


    int arr[n+5];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    sort(arr,arr+n);
    int ans=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]=n-i)
        {
            cout<<arr[i]<<endl;
            break;
        }
        else if(arr[i]<n-i)
        {
            ans= (ans,min(n-i,arr[i]));
        }

        else if(arr[i]>n-i)
        {
            ans= max(ans,min(arr[i],n-i));
        }

    }
    cout<<ans<<endl;



    return 0;
}
