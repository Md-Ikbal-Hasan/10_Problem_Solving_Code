#include<bits/stdc++.h>
using namespace std;
double binarysearch(double a[],int n,double key)
{
    double s= 0;
    double e= n-1;
    double ans= -1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(a[mid]==key)
        {
            ans = mid;
            break;
        }
        else if(a[mid]>key)
            e= mid - 1;
        else
            s = mid + 1;
    }
    return ans;
}
int main()
{

    int n;
    cin>>n;
    double a[n+5];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    int q;
    double key;
    cin>>q;
    while(q--)
    {
        cin>>key;
        double result =  binarysearch(a,n,key);
        cout<<result<<endl;

    }
    return 0;
}

