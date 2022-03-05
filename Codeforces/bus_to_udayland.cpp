#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t,i,cnt=0;
	string str,modify[1005];
	cin >> t;
	for(i=0;i<t; i++)
	{
		cin>>str;

		if( (str[0]=='O' && str[1]=='O') && cnt==0 )
		{
			str[0]='+';
			str[1]='+';
			cnt=1;
		}
		else if( (str[3]=='O' && str[4]=='O') && cnt==0 )
		{
			str[3]='+';
			str[4]='+';
			cnt=1;
		}

		modify[i]=str;
		
	}

	if(cnt==0)
		cout<<"NO"<<endl;
	else 
	{
		cout<<"YES"<<endl;
		for(i=0; i<t; i++)
		{
			cout<<modify[i]<<endl;
		}
	}
	

	

	return 0;
}