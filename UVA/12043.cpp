#include<bits/stdc++.h>
using namespace std;
int main()
{

	long long sum=0,x;
	int t;
	cin>>t;
    string str;
    while(t--)
    {
    	cin>>str;
    	if(str=="donate")
    	{
    		cin>>x;
    		sum= sum+x;
    	}
    	else if(str=="report")
    	{
    		cout<<sum<<endl;
    	}
    }


	return 0;
}