#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
	// arr[] = {5, 4, 10, 1, 6, 2}......

	for(int i=1; i<n; i++)
	{
		int temp = arr[i];
		int j = i-1;
		while(j>=0 && arr[j] > temp)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;

	}
}

void printarray(int arr[], int n)
{
	cout<<"sorted array is : ";
	for(int i=0;i <n; i++)
		cout<<arr[i]<<" ";
}
int main()
{
	int n;
	cout<<"Enter the number of element: ";
	cin>>n;
	int arr[n+1];
	cout<<"Enter the element: ";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	insertion_sort(arr, n);
	printarray(arr, n);

}