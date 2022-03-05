#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long d1,d2,d3;
	cin>>d1>>d2>>d3;
	long long dis1=0,dis2=0,dis3=0,dis4=0;
	dis1 = 2*(d1+d2);
	dis2 = d1+d2+d3;
	dis3 = 2*(d1+d3);
	dis4 = 2*(d2+d3);
	long long ans = min (dis1, min(dis2, min(dis3,dis4) )  );
	cout<<ans<<endl;
	return 0;
}

/*
d1+d1+d2+d2
d1+d3+d2
d1+d3+d3+d1
d2+d2+d1+d1
d2+d3+d1
d2+d3+d3+d2
*/