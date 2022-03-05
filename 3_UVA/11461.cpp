#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int a,b;
	while(cin>>a>>b)
	{
		if(a==0 && b==0)
		{
			break;
		}
		a = sqrt(a-1);
		b = sqrt(b);
		int ans = b - a;
		cout<<ans<<endl;
	}

return 0;
}