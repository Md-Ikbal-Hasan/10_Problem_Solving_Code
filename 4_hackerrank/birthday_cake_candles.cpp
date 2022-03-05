#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,x, cnt=0;
	vector<int> vec ;
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cin>>x;
		vec.push_back(x);
	}
	//sort the vector
	sort( vec.begin(), vec.end() );
	int max = vec[n-1];

	for(int i=0; i<n; i++)
	{
		if(max== vec[i])
			cnt++;
	}

	cout<<cnt<<endl;

	return 0;
}