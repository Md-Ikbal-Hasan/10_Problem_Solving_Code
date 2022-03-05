#include<bits/stdc++.h>
using namespace std;
int main()
{

	string a,b;
	while(cin>>a>>b)
	{
		if(a=="0" && b=="0")
			break;
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		if(a.size()>b.size())
		{
			while(a.size()!=b.size())
			{
				b=b+'0';
			}
		}
		else if(a.size()<b.size())
		{
			while(a.size()!=b.size())
			{
				a=a+'0';
			}
		}
		int len=a.size();
		int rem=0,cnt=0;
		for(int i = 0;i < len; i++)
		{
			if( (a[i]-'0' + b[i]-'0' + rem)> 9 )
			{
				cnt++;
				rem=1;
			}
			else
				rem=0;
		}
		if(cnt==0)
			cout <<"No carry operation."<<endl;
		else if(cnt==1)
			cout<<"1 carry operation."<<endl;
		else
			cout<<cnt<<" carry operations."<<endl;
	}



	return 0;
}