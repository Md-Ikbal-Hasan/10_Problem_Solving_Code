#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int n, int key)
{
	int l = 0, r = n-1;
	while(l < r)
	{
		int mid  = (l+r) /2;
		if(key == arr[mid])
			return mid;
		else if(key  < mid)
			r = mid-1;
		else
			l = mid+1;
	}

	return -1;
	/*
	Time complexity of binary search 
	Best case --> O(1)
	worst case--> O(logn)
	*/

}


int main()
{

	int n;
	cout<<"Enter the number of element  : ";
	cin>>n;
	int arr[n+1];
	cout<<"Enter the element in sorted order : ";
	for(int i=0; i<n; i++)
	{
		cin>> arr[i];
	}
	int key;
	cout<<"Enter the element that you want ot found :";
	cin>>key;
	int  result = binary_search(arr, n, key);
	(result== -1) ? cout<<"Element is not present in the array"
					:cout<< "Element is present at index : "<<result;




	return 0;
}