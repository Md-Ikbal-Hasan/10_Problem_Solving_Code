#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned int n,m,a;
	cin>>n>>m>>a;
	long long ans  = ceil( (n/double(a)) ) * ceil( (m/double(a)) );
	cout<<ans<<endl;

	return 0;
}

