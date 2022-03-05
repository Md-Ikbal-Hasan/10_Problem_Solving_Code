#include<bits/stdc++.h>
using namespace std;
int main()
{
	//First in first out(FIFO)
	queue<string> q;
	q.push("iqbal");
	q.push("sunny");
	q.push("mubin");
	q.push("sayeed");

	while(!q.empty())
	{
		cout<<q.front()<<endl;
		q.pop();
	}

	
	return 0;

}