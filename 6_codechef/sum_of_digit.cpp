#include <iostream>
using namespace std;

int main() {
	int t,n,digit_sum=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    while(n != 0)
	    {
	        int digit = n%10;
	        n = n / 10;
	        digit_sum +=  digit;
	    }
	    cout<<digit_sum<<endl;
	    digit_sum = 0;
	}

	return 0;
}