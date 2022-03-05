// list basic operation..........

#include<bits/stdc++.h>
using namespace std;
void display(list<int> &lst)
{
	list<int> :: iterator it;
	for(it = lst.begin() ;it != lst.end() ;it++)
	{
		cout<<*it<<" ";
	}
	cout<<"\n";
}

int main()
{
	list <int> list1;
	list1.push_back(5);
	list1.push_back(7);
	list1.push_back(1);
	list1.push_back(9);
	list1.push_back(3);
	list1.push_back(78);
	display(list1);
	cout<<"front element of list1: "<<list1.front()<<"\n";
	cout<<"back element of list1: "<<list1.back()<<"\n";

	list1.pop_front();
	list1.pop_back();
	cout<<"after pop list1 is : ";
	display(list1);

	list1.sort();
	cout<<"after sort list1 is : ";
	display(list1);


	list<int> list2;
	list2.push_back(45);
	list2.push_back(4);
	list2.push_back(12);
	cout<<"element of list2: ";
	display(list2);

	list1.merge(list2);
	cout<<"after merge list1 and list2, the list1 is : ";
	display(list1);

	list1.reverse();
	display(list1);

	return 0;
}