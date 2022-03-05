#include<bits/stdc++.h>
using namespace std;
int main()
{

	 long long k,n,w,tot=0,required;
	 cin>>k>>n>>w;
	 for(int i=1; i<=w; i++)
	 {
	 	tot = tot + k*i; 
	 }
	 if(n>=tot)
	 	cout<<"0"<<endl;
	 else if(n<tot)
	 {
	 	required = tot - n;
	 	cout<<required<<endl;
	 }

	return 0;
}