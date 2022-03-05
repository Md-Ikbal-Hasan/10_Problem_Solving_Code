#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	char decimal[10005];
	cin>>str;
	for(int i=0; i<str.length(); i++)
	{
		if(str[i] == '.')
			break;
		else
		{
			decimal[i] = str[i];
		}
		
	}
	cout<<decimal<<endl;

	/*stringstream degree(decimal);

	long long x = 0;
	degree >> x;
	cout<<x<<endl;*/

	return 0;
}