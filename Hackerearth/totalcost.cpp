#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,s,t,h,x,price=0;

	cin>>p>>s>>t>>h>>x;
	int samecost = s- t;
	if((x -samecost) > 0)
	{
		price += p*samecost;
		price += (x-samecost)*h;
	}
	else if((x-samecost<=0))
	{
		price += p*x;
	}
	cout<<price<<endl;


	return 0;
}