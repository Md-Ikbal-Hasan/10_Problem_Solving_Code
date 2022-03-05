#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	while(getline(cin,str))
	{
		int slen = str.length();
		string word;
		vector<string> revstring;
		for(int i=0; i<slen; i++)
		{
			if(str[i]!=' ')
			{
				word = word + str[i];
			}
			else
			{
				reverse(word.begin(), word.end());
				revstring.push_back(word);
				word.clear();
			}
		}
		reverse(word.begin(), word.end());
		revstring.push_back(word);
		int len = revstring.size();
		for(int i=0; i<len; i++)
		{
			cout<<revstring[i];
			if(i!=len-1)
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	return 0;
}