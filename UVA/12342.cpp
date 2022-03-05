#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin>>t;
	double taka,tax=0;
	while(t--)
	{
		cin>>taka;
		if(taka<=180000)
			tax = 0;
		else
		{
			taka = taka -180000;
			if(taka>0)
				tax = tax + 0.10*taka;
			taka = taka - 300000;
			if(taka>0)
				tax = tax + 
		}

	}


	return 0;
}