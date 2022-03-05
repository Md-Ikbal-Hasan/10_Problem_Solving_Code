#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	map<char, int> mymap; 

	// Insert pairs in the multimap 
	mymap.insert(make_pair('a', 1)); 
	mymap.insert(make_pair('b', 4)); 
	mymap.insert(make_pair('d', 5)); 
	mymap.insert(make_pair('c', 2)); 
	mymap.insert(make_pair('e', 9)); 
	mymap.insert(make_pair('g', 5)); 
	mymap.insert(make_pair('f', 19)); 
     
	// Show content 
	for (auto it = mymap.begin();  it != mymap.end();  it++) { 

		cout << it->first << " => "<< it->second << endl; 
	} 
	map<char, int > mymap2(mymap.begin() , mymap.end());
	map<char, int>::iterator itr;
       
    cout<<"after copy the element from mymap to mymap2"<<endl;  
	for(itr = mymap2.begin(); itr != mymap2.end(); itr++)
	{
		cout<<itr->first<<" => "<<itr->second<<endl;
	}
      
	mymap2.erase(mymap2.begin(), mymap2.find('d'));
    cout<<"after delete elemnt  from mymap2"<<endl;  
	for(itr = mymap2.begin(); itr != mymap2.end(); itr++)
	{
		cout<<itr->first<<" => "<<itr->second<<endl;;
	}
     
    cout<<"lower bound of key d ; "<<endl;
	cout<<mymap2.lower_bound('d')->first<<" "<<mymap2.lower_bound('d')->second<<endl;

	cout<<"upper bound of key d ; "<<endl;
	cout<<mymap2.upper_bound('d')->first<<" "<<mymap2.upper_bound('d')->second<<endl;



	return 0; 
} 
