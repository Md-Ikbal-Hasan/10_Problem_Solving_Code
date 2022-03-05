#include<bits/stdc++.h>
using namespace std;
int t,a,b,result,x;
int main()
{

	cin>>t;
	while(t--)
    {
        cin>>a>>b;
        x = abs(a-b);
        result = x/10 ;
        if(x%10 != 0)
            result++;

        cout<<result<<endl;
    }
	return 0;
}

