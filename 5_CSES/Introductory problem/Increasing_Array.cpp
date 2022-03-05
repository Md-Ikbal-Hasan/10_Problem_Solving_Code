#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    long long arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    long long diff = 0, moves = 0;
    for(int i=1; i<n; i++)
    {
        if(arr[i] < arr[i-1])
        {
            diff = arr[i-1]  - arr[i];
            moves += diff;
            arr[i] += diff;
        }
    }
    cout<<moves<<endl;
}
