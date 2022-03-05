#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	/*if(x==0)
		cout<<100<<endl;*/
    if(x%100==0)
		cout<<100<<endl;
	else if(x % 100 !=0)
	{
		int ans = 100 - (x % 100);
		cout<<ans;
	}

	return 0;
}