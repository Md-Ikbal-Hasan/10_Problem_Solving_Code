#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int x, max_sum=0, min_sum  =0;
	vector<long int> vec;
	for(int i=0; i<5; i++)
	{
		cin>>x;
		vec.push_back(x);
	}
	//sort the vector
	sort( vec.begin(), vec.end() );

	for(int i=0; i<4; i++)
		min_sum += vec[i];

	for(int i=1; i<5; i++)
		max_sum += vec[i];

	cout<<min_sum<<" "<<max_sum<<endl;

	return 0;
}