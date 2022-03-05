#include<bits/stdc++.h>
using namespace std;
int n;
int range = 1e7;
int main()
{
	cin>>n;
	double arr[range];
	arr[0] = 0;
	for(int i=1; i<=range; i++)
	{
		arr[i] = arr[i-1] + i;
		if(arr[i] >= n)
		{
			cout<<i<<endl;
			break;
		}
	}
 
	return 0;
}