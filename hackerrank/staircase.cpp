#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, w= 1,m;
	cin>>n;
	int sp = n-1;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<sp; j++)
			cout<<" ";
		for(m=0; m<w; m++)
			cout<<"#";
		cout<<endl;
		w++;
	    sp--;
	}
	
	return 0;
}