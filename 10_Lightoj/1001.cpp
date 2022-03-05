#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,x,y;
	cin>>t;
	while(t--)
	{
		cin>>a;
		if(a==0)
		{
			cout<<"0"<<" "<<"0"<<endl;
		}
		else
		{
			x = a/2;
			y = a- x;
			cout<<x<<" "<<y<<endl;
		}
		
		 
	}


    return 0;
}
