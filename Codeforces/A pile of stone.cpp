#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string str;
	 cin>>n>>str;
	int c=0;
	for (int i=0;i<n;i++)
    {
		if (str[i]=='+')
		c++;
		else
		c--;
		if (c<0) c=0;
	}
	cout<<c;
	return 0;
}
