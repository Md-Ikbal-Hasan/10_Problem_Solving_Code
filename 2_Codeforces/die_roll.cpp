#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y, get_ans = 0;
	cin>>x>>y;
	int mx = max(x,y);
	int chances = (6 - mx) +1;
	// a/b( numerator / denominitor)
	int a,b;

	for(int i=6; i>=2; i--)
	{
		if( (6 % i==0) && (chances %i==0) )
		{
			a = chances / i;
			b = 6/i;
			get_ans = 1;
			break;
		}
	}

	if(get_ans == 1)
		cout<<a<<"/"<<b<<endl;
	else if(get_ans==0)
		cout<<chances<<"/"<<"6"<<endl;

	return 0;
}