#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	if(a==0)
		return b;
	return gcd(b %a , a);
}

int main()
{
	int a,b;
	cout<<"Enter the two number (A , B) = ";
	cin>>a>>b;
	int result = gcd(a, b);
	cout<<"Gcd of "<<a <<" and "<<b<<" = "<<result <<endl;

}