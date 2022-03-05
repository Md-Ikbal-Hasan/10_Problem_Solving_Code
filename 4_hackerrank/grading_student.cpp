//https://www.hackerrank.com/challenges/grading/problem
#include<bits/stdc++.h>
using namespace std;
int n;
void grading(int *arr)
{
	for(int i=0; i<n; i++)
	{
		if(arr[i] < 38)
		{

		}
		else if(arr[i] >= 38)
		{
			int x = arr[i];
			int req = 5 - (x % 5) ;
			int nextmultiple = x + req;
			if ( (nextmultiple - x ) < 3 )
			{
				arr[i] = nextmultiple;
			}
		}
	}

}


int main()
{

	
	cin>>n;
	int arr[n+5];
	for(int i=0; i<n; i++)
		cin>>arr[i];

	grading(arr);

	for(int i=0; i<n; i++)
		cout<<arr[i]<<endl;


	return 0;
}