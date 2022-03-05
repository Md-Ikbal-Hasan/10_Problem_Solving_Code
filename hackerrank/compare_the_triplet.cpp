#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3],b[3],ans[2], alice =0, bob = 0 ;
	for(int i=0; i<3; i++)
		cin>>a[i];
	for(int i=0; i<3; i++)
		cin>>b[i];

	for(int i=0; i<3; i++)
	{
		if(a[i]>b[i])
			alice++;
		else if(b[i]>a[i])
			bob++;
	}
	ans[0] = alice;
	ans[1]= bob;
	cout<<ans[0]<<" "<<ans[1]<<endl;
}