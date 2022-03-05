#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	int arr[n+1];
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		if(arr[i]>10)
		{
			sum = sum + (arr[i] - 10);
		}
	}
	cout<<sum<<endl;

	return 0;
}