#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,seraja = 0, dima = 0 ,turn = 1;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int l = 0, r = n-1;
    while(l<=r)
    {
       if(turn % 2 ==1)
       {
           seraja = seraja + max(arr[l],arr[r]);
       }
       else{
        dima  = dima + max(arr[l], arr[r]);
       }
       turn++;

       if(arr[l]>arr[r])
        l++;
       else
        r--;
    }
    cout<<seraja<<" "<<dima<<endl;



    return 0;
}
