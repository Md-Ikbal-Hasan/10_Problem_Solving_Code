#include <bits/stdc++.h>
using namespace std;

void merge(int A[], int lb, int mid, int ub)
{
    int i = lb;
    int j = mid + 1;
    int k = lb;
    int B[ub + 1];
    while (i <= mid && j <= ub)
    {
        if (A[i] <= A[j])
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
    if (i > mid)
    {
        while (j <= ub)
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    else //  j > up
    {
        while (i <= mid)
        {
            B[k] = A[i];
            i++;
            k++;
        }
    }

    for (int k = lb; k <= ub; k++)
    {
        A[k] = B[k];
    }
}

void mergesort(int A[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergesort(A, lb, mid);
        mergesort(A, mid + 1, ub);
        merge(A, lb, mid, ub);
    }
}

void printarray(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {15, 5, 24, 8, 1, 3, 16, 10, 20};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array befor sorted : ";
    for (int i = 0; i <= arr_size - 1; i++)
        cout << arr[i] << " ";

    mergesort(arr, 0, arr_size - 1);

    cout << endl
         << "Array after sorted : ";
    for (int i = 0; i <= arr_size - 1; i++)
        cout << arr[i] << " ";

    // printarray(arr , arr_size);
}
