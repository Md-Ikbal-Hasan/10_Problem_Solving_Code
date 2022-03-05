//g++ -std=c++11 filename.cpp && a.exe

#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;

	for(int i= 1 ; i<=10; i+=2)
	{
		v.push_back(i);
	}
	cout<<"the size of vector: "<<v.size()<<endl;

	for(int i = 0 ; i<v.size(); i++)
		cout<<v[i] << endl; 
	cout<<"the value of index 3 is: "<<v[3]<<endl;
	//v.clear();
	cout<<"vector is empty or not.if Empty = 1,if Not_Empty: 0    =   "<<v.empty()<<endl;
	//cout<<"capacity of vector is: "<<v.capacity()<<endl;

	/*copy vector
	vector <int> v2 = v;
	for(int i = 0 ; i<v2.size(); i++)
		cout<<v2[i] << endl; */


    //declar vector with fixed size and inittialize with 0
	/*vector <int> v3(5,0);
	for(int i = 0 ; i<v3.size(); i++)
		cout<<v3[i] << endl;*/


	int N=5,M=5;
	vector< vector<int> > matrix(N,vector<int> (M)  );
	cout<< matrix.size()<<endl;;



	//pair of vector...........
	vector < pair<int,string> > vec;
	vec.push_back(make_pair(320, "Tanvir"));
	vec.push_back(make_pair(321, "Anik"));
	vec.push_back(make_pair(322, "rahim"));
	vec.push_back(make_pair(323, "karim"));
	for(auto it =vec.begin(); it != vec.end(); it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	cout<<vec[0].first<<" "<<vec[0].second<<endl;






	
	return 0;
}
