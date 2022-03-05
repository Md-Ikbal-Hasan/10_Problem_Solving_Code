#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,sum=0,cnt=0;
    cin>>n>>m;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        sum = sum+arr[i];
        if(sum<m)
        {

        }
        else if(sum>m)
        {
            cnt++;
            sum=arr[i];
        }
        else
        {
            cnt++;
            sum=0;
        }

    }
    if(sum>0)
    {
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
