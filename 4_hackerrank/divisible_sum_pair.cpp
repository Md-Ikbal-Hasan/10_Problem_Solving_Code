#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,x, cnt = 0;
	cin>>n>>k;
	vector<int> vec;
	for(int i=0; i<n; i++)
	{
		cin>>x; //take the array element
		vec.push_back(x); 
	}

	for(int i=0; i<n-1; i++)
	{
		for(int j= i+1; j<n; j++)
		{
			if(i<j)
			{
				if( (vec[i] + vec[j]) % k == 0)
					cnt = cnt + 1;
			} 
			
		}
	}
   
	cout<<cnt<<endl;

	
	return 0;
}