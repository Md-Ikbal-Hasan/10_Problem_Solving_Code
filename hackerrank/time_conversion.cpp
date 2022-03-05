#include <bits/stdc++.h>
using namespace std;
int main()
{
	int hh,mm,ss;
	char ch, ap,m;
	cin>>hh>>ch>>mm>>ch>>ss>>ap>>m;
	if(ap=='A')
	{
		if(hh==12)
			hh = 0;
	}
	else if(ap=='P' && hh != 12)
	{
		hh += 12;
	}
	//cout<<hh<<ch<<mm<<ch<<ss<<endl;
	
	printf("%02d:%02d:%02d", hh, mm, ss) ;


	
	return 0;
}