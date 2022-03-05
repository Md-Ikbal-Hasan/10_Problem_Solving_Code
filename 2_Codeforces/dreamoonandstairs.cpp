#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,move;
	cin>>n>>m;
	if(n<m)
		cout<<"-1"<<endl;
	
	else
	{
		
		if(n%2==0)
			move = n/2;
		else
			move = (n/2) + 1;
		while(move%m!=0)
		{
			move++;
		}
		cout<<move<<endl;
	}

return 0;
}