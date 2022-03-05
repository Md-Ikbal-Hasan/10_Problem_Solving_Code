#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	string str;
	cin>>str;
	int len= str.length();
	for(int i = 0; i < len; i++)
	{
		if(str[i]=='+')
			continue;
		v.push_back(str[i]-'0');
	}
	sort(v.begin(),v.end());
	int vlen = v.size();
	for(int i = 0; i<vlen; i++)
	{
		if(i==vlen-1)
		{
			cout<<v[i];
		}
		else
		{
			cout<<v[i]<<"+";
		}
	}





	return 0;
}