#include<bits/stdc++.h>
using namespace std;

int partition(int *a , int start,int  end)
{
	int pivot  = a[end];
	int partitionindex  = start;
	for(int i=start; i<end; i++)
	{
		if(a[i] <= pivot)
		{
			swap(a[i] , a[partitionindex]);
			partitionindex++;
		}
	}
	swap(a[partitionindex] , a[end]);
	return partitionindex;
}


void quicksort(int *a, int start , int end)
{
	if(start<end)
	{
		int partitionindex = partition(a , start , end);
		quicksort(a, start, partitionindex - 1);
		quicksort(a, partitionindex + 1, end);
	}
}
int main()
{
	cout<<"Quicksort algorithm implementation"<<endl;
	int a[] = {7,2,1,6,8,5,3,4};
	int n = sizeof(a) / sizeof(a[0]);
	quicksort(a, 0, n-1);
	for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" "; // why it is not print the array element ?
    }
}
