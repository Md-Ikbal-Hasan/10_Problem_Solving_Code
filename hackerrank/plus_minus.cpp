#include<bits/stdc++.h>
using namespace std;
int n;
void plusminus(int *arr)
{
	int pos = 0, neg = 0, zr = 0;
	for(int i=0; i<n; i++)
	{
		if(arr[i] >0)
			pos++;
		else if(arr[i] <0)
			neg++;
		else if(arr[i] == 0)
			zr++;
	}
	double positive  = (double)pos/(n);
	double negative  = (double)neg/(n);
	double zero  = (double)zr/(n);
	cout<<fixed<<setprecision(6)<<positive<<endl;
	cout<<fixed<<setprecision(6)<<negative<<endl;
	cout<<fixed<<setprecision(6)<<zero<<endl;
	
}
int main()
{
	cin>>n;
	int arr[n+5];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	plusminus(arr);
	
	return 0;
}