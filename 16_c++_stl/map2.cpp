#include<bits/stdc++.h>
using namespace std;
int main()
{

	unordered_map<int, string> m;
	m[1] = "abc";
	m[5] = "cde";
	m[3] = "acd";
	m.insert({4,"afg"});
	m.insert(make_pair(6,"efg"));

	unordered_map<int, string> :: iterator it;
	//for print
	for(it = m.begin(); it!= m.end(); it++)
	{
		cout<<(*it).first<<" "<<it->second<<endl; 
	} 

	cout<<"another approch for print:"<<endl;
	//same as previos print. but its efficient
	for(auto &pr : m)
	{
		cout<<pr.first<<" "<<pr.second<<endl;
	}

	cout<<"find value of 3: ";
	auto itr = m.find(3);
	if(itr==m.end())
	{
		cout<<"No value";
	}
	else
	{
		cout<<(*itr).first<<" "<<(*itr).second;
	}



	return 0;
}