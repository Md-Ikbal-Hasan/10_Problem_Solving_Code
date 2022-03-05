#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,z;
	int t;
	cin>>t;
	int n = 1;
	while(t--)
	{
		cin>>x>>y>>z;
		if(x<=20 and y<=20 and z<=20)
		{
			cout<<"Case " <<n <<":" <<" good"<<endl;
			n++;
		}
		else
			{
			cout<<"Case " <<n <<":" <<" bad"<<endl;
			n++;
		}

	}


	return 0;
}