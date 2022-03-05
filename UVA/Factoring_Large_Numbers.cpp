#include<bits/stdc++.h>
using namespace std;
vector<long long>vec;
void prime_fact(long long n)
{
	long long sq= sqrt(n);
	for(int i=2;i<=sq;i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
				n=n/i;
				cout<<"    "<<i<<endl;
			}
		}

	}
	if(n!=1)
		cout<<"    "<<n<<endl;
	cout<<endl;

}
int main()
{
    long long n;
    while(cin>>n)
    {
    	if(n<0)
    		break;
    	prime_fact(n);
    }
	return 0;
}