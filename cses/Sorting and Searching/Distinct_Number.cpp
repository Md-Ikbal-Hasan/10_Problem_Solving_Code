#include<bits/stdc++.h>
using namespace std;
void merge(int A[] , int lb,int mid, int ub)
{
    int i = lb;
    int j = mid+1;
    int k = lb;
    int B[ub+1];
    while(i <= mid && j <= ub)
    {
        if(A[i] <= A[j])
        {
            B[k] = A[i];
            i++;
        }
        else
        {
            B[k] = A[j];
            j++;
        }
        k++;
    }
    if(i > mid)
    {
        while(j <= ub)
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i <= mid)
        {
            B[k] = A[i];
            i++;
            k++;
        }
    }

    for(int k=lb; k<=ub; k++)
    {
        A[k] = B[k];
    }
}



void mergesort(int A[] , int lb, int ub)
{
    if(lb < ub)
    {
        int  mid  = (lb + ub) / 2;
        mergesort(A, lb, mid);
        mergesort(A, mid+1, ub);
        merge (A, lb, mid, ub);
    }
}
void printarray(int arr[] , int sz)
{
    cout<<"After Sorted : ";
    for(int i=0; i< sz; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    int arr_size = sizeof(arr)  / sizeof(arr[0]);
    mergesort(arr , 0 , arr_size-1);
    //printarray(arr, arr_size);



    int cnt = 0;
    for(int i = 0; i<n-1; i++)
    {
        if(arr[i] != arr[i+1])
            cnt++;
    }
    cnt++;
    cout<<cnt;


}

