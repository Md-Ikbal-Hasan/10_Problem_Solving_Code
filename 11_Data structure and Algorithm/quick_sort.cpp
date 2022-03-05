#include<bits/stdc++.h>
using namespace std;
int partition(int a[], int lb, int ub)
{
	int pivot = a[lb], start =lb,  end =ub ;
	while(start <end)
	{
		while(a[start] <= pivot)
		{
			start++;
		}
		while(a[end] > pivot)
		{
			end--;
		}
		if(start < end)
		{
			swap( a[start] , a[end] ) ;
		}
	}

	swap(a[lb] , a[end]);
	return end;
}


int quicksort(int a[], int lb, int ub)
{
	if(lb <ub)
	{
		int loc = partition(a, lb,ub);
		quicksort(a, lb, loc-1);
		quicksort(a, loc+1, ub);
	}
}


void printarray(int a[], int n)
{
	cout<<"after sorted: ";
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}



int main()
{

	int n;
	cout<<"Enter the number of element : ";
	cin>>n;
	int arr[n+1];
	cout<<"Enter the element: ";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
  
	quicksort(arr, 0, n-1); //pass the array, lowerbound, and uper bound
	printarray(arr, n);


	return 0;
}