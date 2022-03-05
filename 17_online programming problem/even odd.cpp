#include<bits/stdc++.h>
using namespace std;
void show(int arr[],int sz)
{
    for(int i=0;i<sz;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={3,5,8,2,9,1,34,23,24};

    int sz= sizeof(arr)/ sizeof(arr[0]);
    show(arr,sz);cout<<endl;
    sort(arr,arr+sz);
    show(arr,sz);cout<<endl;
    reverse(arr,arr+sz);cout<<endl;
    show(arr,sz);cout<<endl;

    show(arr,sz);cout<<endl;
    if(binary_search(arr,arr+sz,4))
        cout<<"present";
    else
        cout<<"absent";

    return 0;
}
