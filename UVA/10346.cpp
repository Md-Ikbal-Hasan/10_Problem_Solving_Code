#include<bits/stdc++.h>
using namespace std;
int main()
{

   int n,k,total;
   while( scanf("%d %d",&n,&k) == 2 ) 
   {
   	total = n;
   	while(n>=k)
   	{
   		int renew = n/k;
   		total += renew;
   		n = renew + (n%k);
   	}
   	cout<<total<<endl;
   }



}
