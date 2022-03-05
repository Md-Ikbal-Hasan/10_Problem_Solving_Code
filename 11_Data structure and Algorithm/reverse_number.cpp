#include<bits/stdc++.h>
using namespace std;
int reverse_number(int x)
{
	int reverse = 0;
	while(x != 0 )
	{
	reverse = (reverse*10) + x%10;
	x = x/ 10;
	}

	return reverse;
}

int main()
{
	int x;
	cout<<"Enter a number :";
	cin>>x;
	int reverse = reverse_number(x);
	cout<<"The reverse number is : "<<reverse<<endl;

	return 0;
}