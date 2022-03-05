#include<bits/stdc++.h>
using namespace std;
int main()
{

vector<string> word;
word.push_back("anything");
word.push_back("HELLO");
word.push_back("HOLA");
word.push_back("HALLO");
word.push_back("BONJOUR");
word.push_back("CIAO");
word.push_back("ZDRAVSTVUJTE");
int i=1;
string str;

while(cin>>str)
{
	if(str[0]=='#')
		break;
else
{
if(str==word[1])
{
	cout<<"Case "<<i<<": "<<"ENGLISH"<<endl;
	i++;
}
else if(str==word[2])
{
	cout<<"Case "<<i<<": "<<"SPANISH"<<endl;
	i++;
}
else if(str==word[3])
{
	cout<<"Case "<<i<<": "<<"GERMAN"<<endl;
	i++;
}
else if(str==word[4])
{
	cout<<"Case "<<i<<": "<<"FRENCH"<<endl;
	i++;
}
else if(str==word[5])
{
	cout<<"Case "<<i<<": "<<"ITALIAN"<<endl;
	i++;
}
else if(str==word[6])
{
	cout<<"Case "<<i<<": "<<"RUSSIAN"<<endl;
	i++;
}
else 
{
	cout<<"Case "<<i<<": "<<"UNKNOWN"<<endl;
	i++;
}
}
}


	return 0;
}