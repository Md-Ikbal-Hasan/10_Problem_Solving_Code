#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,q,t,z,input;
    cin>>n>>q;
    vector<int> a;

    for(int i=0; i<n; i++)
    {
    	cin>>input;
    	a.push_back(input);
    }



    for(int i=0; i<q; i++)
    {
    	cin>>t>>z;
    	if(t==1)
    	{
    		int new_val = 1 - a[z-1];
    		a[z-1] =  new_val;
    		//cout<<new_val<<endl;
    		//sort(a.begin(), a.end(), greater<int>()); //after assigning the new value again sort

    	}
    	if(t==2)
    	{
    		sort(a.begin(), a.end(), greater<int>()); 
    		cout<<a[z-1]<<endl;

    	}

    }


	return 0;
}