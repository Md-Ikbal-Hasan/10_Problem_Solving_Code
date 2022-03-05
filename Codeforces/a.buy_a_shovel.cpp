#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,r;
	cin>>k>>r;
	 for(int i=1; i<=10; i++)
	 {
	 	int x = k*i;
	 	int mod = x%10;
	 	if(mod == 0){
	 		cout<<i<<endl;
	 		break;
	 	}
        else if(mod == r)
	 	{
	 		cout<<i<<endl;
	 		break;
	 	}

	 	}
	 	
	 
	 return 0;
}