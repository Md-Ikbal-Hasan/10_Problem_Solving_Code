#include<bits/stdc++.h>
using namespace std;
int digit_sum(int x)
{
	int sum = 0;
	while(x != 0)
	{
		sum = sum + x%10;
		x = x / 10;
	}
	return sum;
}

int main()
{
	int x;
	cout<<"Enter a number: ";
	cin>>x;
	int result  = digit_sum(x);
	cout<<"sum of the digit :"<<result<<endl;

	return 0;
}