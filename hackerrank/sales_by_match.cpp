#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[101] = {};

	for(int i=0; i<n; i++)
	{
	    int x;
		cin>>x;
		arr[x]++;

	}

	int result= 0;
	for(int i=0; i<=100; i++)
	{
		result += arr[i] / 2;
	}
	cout<<result<<endl;
}
