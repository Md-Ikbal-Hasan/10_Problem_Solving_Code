#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   cin>>str;
   int len = str.length();
   int cnt=0;
   for(int i=0; i<len; i++)
   {
   	if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
   	{
   		cnt=1;
   		break;
   	}
   }
   if(cnt==1)
   	cout<<"YES"<<"\n";
   else
   	cout<<"NO"<<"\n";

	return 0;
}