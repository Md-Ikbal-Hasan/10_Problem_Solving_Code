#include<bits/stdc++.h>
using namespace std;
int exp(int base, int power)
{
	if(power==0)
		return 1;
	return base * exp(base, power-1);
}
int main()
{
	int base, power;
	cout<<"enter base and power :";
	cin>>base>>power;
	int result = exp(base ,power);
	cout<<result;

}