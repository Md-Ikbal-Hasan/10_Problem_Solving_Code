#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x,y,z,xi=0,yi=0,zi=0;
	while(n--)
	{
		cin>>x>>y>>z;
		xi = xi + x;
		yi = yi + y;
		zi = zi + z;
	}
	//cout<<xi<<" "<<yi<<" "<<zi<<endl;
	if(xi!=0 || yi!=0 || zi!=0)
		cout<<"NO"<<endl;
	else if(xi==0 && yi==0 && zi==0)
		cout<<"YES"<<endl;
	return 0;
}