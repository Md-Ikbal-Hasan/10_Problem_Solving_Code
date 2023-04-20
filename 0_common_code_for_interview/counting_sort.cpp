#include<bits/stdc++.h>
using namespace std;
void counting_sort(int a[], int n, int k)
{   
	// a[] = {2 1 1 0 2 5 4 0 2 8 7 7 9 2 0 1 9}
	//int count[k+1] , aux[n+1]; // if i dont initialize the array with 0 , it is not working. But why ?
	int count[k+1] = {0} , aux[n+1] = {0} ;

	for(int i=0; i<n; i++)
	{
		count[a[i]]++;  // count the each element
	}
	for(int i=1; i<=k; i++)
	{
		count[i] = count[i] + count[i-1];  // sum of count like cumulitive sum
	}

	for(int i = n-1; i>=0; i--)
	{
		aux [--count[a[i]] ] = a[i] ; // put the element in appropriate position
	}

	for(int i=0 ; i<n; i++)
	{
		a[i] = aux[i];   //copy the element of aux array to original array
	}

	/*
	Time and space complexity of counting sort
	O(n+k) ,where n = the size of array
			      k = number of possible values or max value
    */
}

void printarray(int a[], int n)
{
	cout<<endl<<"after sorted:   ";
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	int n, k = 0;
	cout<<"Enter the number of element: ";
	cin>>n;
	int arr[n+1];
	cout<<"Enter the element : ";  // 2 1 1 0 2 5 4 0 2 8 7 7 9 2 0 1 9
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		if(arr[i] >= k )
		{
			k = arr[i];
		}
	}
	cout<<"Before Sorted : ";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	//cout<<"max element is : "<<k<<endl;

	counting_sort(arr, n , k) ; //pass the array(arr), size of array(n) , max element of array(k)
	printarray(arr, n );

}
