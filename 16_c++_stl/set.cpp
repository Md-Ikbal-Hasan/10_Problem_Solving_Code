#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s)
{
	for(string itr : s)
	{
		cout<<itr<<endl;
	}
}

int main()
{
	//set dont take duplicate element....
	set <string>  s;  // unordered_set <string>  s;
	s.insert("abc");   //log(n) and in unordered_set o(1) and use hash table
	s.insert("zsdf");
	s.insert("bcd");
	s.insert("efg");

	auto it = s.find("abc"); //log(n) and in unordered_set o(1)
	if(it != s.end() )
	{
		s.erase(it);
	}
	print(s);

	multiset<string>s2;
	//multiset allow duplicate element



}