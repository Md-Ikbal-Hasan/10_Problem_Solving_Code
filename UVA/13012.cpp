#include<bits/stdc++.h>
using namespace std;
int main()
{

	int a,b,c,d,e,r;
	
	while(scanf("%d",&r)==1)
	{
		
	cin>>a>>b>>c>>d>>e;
	int cnt=0;
	if(a==r)
		cnt++;
	 if(b==r)
		cnt++;
	 if(c==r)
		cnt++;
    if(d==r)
		cnt++;
    if(e==r)
		cnt++;
		cout<<cnt<<endl;
	}

	return 0;
}