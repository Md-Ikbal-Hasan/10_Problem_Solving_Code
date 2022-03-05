#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	if(n==1){
		cout<<arr[0]<<endl;
	}
	else if(n==2){
		cout<<arr[1]<<endl;
	}
	else if(n==3)
	{
		cout<<arr[2]<<endl;
	}
	else{
		sort(arr, arr + n);
		int result = 0;
		for(int i=2;i<n;i++)
		{
			result+= arr[i];
		}
		cout<<result<<endl;
	}

	return 0;
}
