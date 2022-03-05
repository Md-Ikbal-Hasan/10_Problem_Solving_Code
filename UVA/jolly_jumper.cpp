#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; long long x;
	vector<long long> vec;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
		cin>>x;
		vec.push_back(x);
	    }

	    long long x= abs(vec[0]-vec[1]);
	    long long y;
	    int flag=0;

	    for(int i=1;i<n-1;i++)
	    {
	    	y= abs(vec[i]-vec[i+1]);
	    	if(x==(y+1))
	    	{
	    		x=y;
	    		y=0;
	    		flag=0;
	    		continue;
	    	}
	    	else{
	    		flag=1;	
	    		break;  }  	
	    }

	    
	    if(flag==0)
	    		cout<<"Jolly"<<endl;
	    else
	    		cout<<"Not Jolly"<<endl;
	    vec.clear();
	}

	return 0;
}