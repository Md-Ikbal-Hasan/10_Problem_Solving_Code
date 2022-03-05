#include<bits/stdc++.h>
using namespace std;
void digit_sum(long long x)
{
	long long sum = 0;
	while(x != 0)
	{
		sum = sum + x % 10;
		x = x/10;
	}

	if(sum>9)
		digit_sum(sum);
	else if(sum<10)
		cout<< sum << endl;

}

int main()
{
	long long x;
	while(cin>> x)
	{
		if(x==0)
			break;
		else
			digit_sum(x);
	}

	return 0;
}