#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,x,y;
	cin>>a>>b>>c>>d;
	x = max(a,b);
	y = min(c,d);
	int ans  = x-y;
	cout<<ans<<endl;



	return 0;
}