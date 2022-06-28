#include<bits/stdc++.h>
using namespace std;
int main()
{


	int n;
	cin>>n;
	int arr[3];
	
	arr[0] = n % 10;
	int x = n / 10;
	arr[1] = x %10 ;

	cout<<arr[1]<<arr[0]<<endl;
	
	

	return 0;
}