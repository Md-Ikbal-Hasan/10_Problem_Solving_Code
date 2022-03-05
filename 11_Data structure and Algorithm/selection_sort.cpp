// Time complexity of selection sort O(n^2).......
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int n, int arr[])
{
	for(int i=0; i<n-1; i++)
	{
		int min = i;
		for(int j=i+1; j<n; j++)
		{
			if(arr[j] < arr[min])
			{
				min = j;
			}
		}
		swap(arr[i], arr[min]);
	}
}

void printarray(int n,int arr[])
{
	cout<<"sorted array: ";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n;
	cout<<"Enter the number of elements:  ";
	cin>>n;
	int arr[n+1];
	cout<<"Enter the elements : ";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	selection_sort(n,arr);
	printarray(n, arr);


	return 0;
}
