#include<bits/stdc++.h>
using namespace std;
int main()
{

	long long t,a,b,c;
	int i=1;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		
		 if(a+b<=c || b+c<=a || a+c<=b)
		   {
			    cout<<"Case "<<i<<": "<<"Invalid"<<endl;
			    i++;
		   }
   
		else if(a==b && b==c)
			{
				cout<<"Case "<<i<<": "<<"Equilateral"<<endl;
			    i++;
			}
		else if(a==b || b==c || a==c)
			{
				cout<<"Case "<<i<<": "<<"Isosceles"<<endl;
			    i++;
			}
		else
			{
				cout<<"Case "<<i<<": "<<"Scalene"<<endl;
			    i++;
			}
		
	}


	return 0;
}