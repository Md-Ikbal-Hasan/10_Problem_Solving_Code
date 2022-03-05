#include<bits/stdc++.h>
using namespace std;
int n;
long long arraysum(int *s)
{
	long long sum = 0;
	for(int i=0; i<n; i++)
	{
		sum += s[i];
	}

	return sum;
}
int main()
{
	
	cin>>n;
	int arr[n+5];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	long long ans  = arraysum(arr);
	cout<<ans<<endl;

	return 0;
}