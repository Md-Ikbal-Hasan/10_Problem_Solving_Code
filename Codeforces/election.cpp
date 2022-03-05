#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		if(a==0 && b==0 && c==0)
		{
			cout<<1<<" "<<1<<" "<<1<<endl;
		}
		else
		{
		int maximum = max(max(a,b),c);
		int a1 = (maximum - a) + 1;
		int b1 = (maximum - b) + 1;
		int c1 = (maximum - c) + 1;
		if(a==maximum)
			a1 = 0;
		else if(b==maximum)
			b1 = 0;
		else if(c==maximum)
			c1 = 0; 
		cout<<a1<<" "<<b1<<" "<<c1<<endl;
			
		}
		
	}


	return 0;
}