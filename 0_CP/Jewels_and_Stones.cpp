#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		string j,s;
		cin >> j >>s;
		int lenS = s.length() , lenJ = j.length();
		int cnt = 0;
		for(int k=0; k<lenS ; k++)
		{
			for(int i=0; i<lenJ ; i++)
			{
				if( s[k] == j[i] )
				{
					cnt++;
					break;
				}

			}
		}
		cout<<cnt<<endl;
	}

	
	 
	return 0;
}