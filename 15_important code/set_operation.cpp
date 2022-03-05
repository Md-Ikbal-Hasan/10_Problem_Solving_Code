#include<bits/stdc++.h>
using namespace std;
int main()
{

	set<int> st;
	int x;
	cout<<"Enter 5 element:";
	for(int i=0; i<5; i++)
	{
		cin>>x;
		st.insert(x);
	}
	cout<<"size of set: "<<st.size();
	for(auto it:st)
	{
		cout<<it<<" ";
	}



	return 0;
}