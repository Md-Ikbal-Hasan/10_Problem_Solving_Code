// https://www.hackerrank.com/challenges/migratory-birds/problem?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=24-hour-campaign

#include<bits/stdc++.h>
using namespace std;
int x,n;
int main()
{
	
	cin>>n;
	int type [10] = {0};
	for(int i=1; i<=n; i++)
	{
		cin>>x;
		if(x==1)
			type[1] += 1;

		else if(x==2)
			type[2] += 1;
		else if(x==3)
			type[3] += 1;
		else if(x==4)
			type[4] += 1;
		else if(x==5)
			type[5] += 1;
	}

	int max = type[1];
	int ans = 0;
	for(int i=2; i<5; i++)
	{
		if( max < type[i]){
			max = type[i];
			ans = i;
		}
		
	}
	cout<<ans<<endl;



	return 0;
}