#include<bits/stdc++.h>
using namespace std;
int main()
{

int a,b,t;
cin>>t;

for(int j=1;j<=t;j++)
{
	int sum=0;
	cin>>a>>b;
	if(a>b)
	{
		swap(a,b);
	}

	if(a%2!=0)
	{
		for(int i=a;i<=b;i=i+2)
		{
			sum= sum+i;
		}
		cout<<"Case "<<j<<":"<<" "<<sum<<endl;
	}

	else if(a%2==0)
	{
		for(int i=a+1; i<=b; i=i+2)
		{
			sum= sum+i;
		}
		cout<<"Case "<<j<<":"<<" "<<sum<<endl;
	}
}


return 0;
}