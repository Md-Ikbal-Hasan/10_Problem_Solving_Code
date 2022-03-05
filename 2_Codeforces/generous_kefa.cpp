#include<bits/stdc++.h>
using namespace std;
int arr[10000000];
int main()
{
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    int maximum=0;
    for(int i=0;i<n;i++)
    {
        int x = str[i] - '0';
        arr[x]++ ;
        if(maximum<x)
        {
            maximum = x;
        }
    }
   cout<<arr[maximum]<<endl;
   if(arr[maximum]<=k)
    cout<<"YES"<<endl;
   else if(arr[maximum]>k)
    cout<<"NO"<<endl;



    return 0;
}
