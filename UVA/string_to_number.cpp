#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>> str;
	int x = 0;
	int len = str.size();
	for(int i = 0; i< len; i++)
	{
		x = x*10 + (str[i]-'0'); 
	}
	cout<< x<< endl;

	return 0;
}