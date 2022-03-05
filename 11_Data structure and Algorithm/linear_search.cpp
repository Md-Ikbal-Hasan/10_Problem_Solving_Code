#include<bits/stdc++.h>
using namespace std;
void linear_search(int arr[], int n, int key)
{
	int found = 0,index;
	for(int i=0; i<n; i++)
	{
		if(arr[i] == key)
		{
			found = 1;
			index = i;
			break;
		}
	}
	if(found==1)
	{
		cout<<"Element found at index : "<<index<<endl;
	}
	else
	{
		cout<<"Element is not found";
	}

	/*
	Time complexity of Linear search 
	Best case --> O(1)
	worst case--> O(log2n)
	*/
}
int main()
{

	int n;
	cout<<"Enter the number of element : ";
	cin>>n;
	int arr[n+1];
	cout<<"Enter the element : ";
	for(int i=0; i<n; i++)
	{
		cin>> arr[i];
	}
	int key;
	cout<<"Enter the element that you want ot found :";
	cin>>key;
	linear_search(arr, n, key);



	return 0;
}