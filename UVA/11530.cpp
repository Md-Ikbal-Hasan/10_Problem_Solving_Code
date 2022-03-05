#include<bits/stdc++.h>
using namespace std;
int main()
{

	 string str;
	 int t;
	 cin>>t;

	 while(t--)
	 {
	 	getline(cin,str);
	 	int len = str.length();
	 	int cnt=0,i;
	 	
	 	
	 	for(i = 0; i<len; i++)
	 	{
	 		if(str[i]=='a' || str[i]=='d' || str[i]=='g' || str[i]=='j' || 
	 			str[i]=='m' || str[i]=='p' || str[i]=='t' || str[i]=='w' || 
	 			str[i]==' ')

	 			cnt = cnt + 1;

	 		else if(str[i]=='b' || str[i]=='e' || str[i]=='h' || str[i]=='k' || 
	 			str[i]=='n' || str[i]=='q' || str[i]=='u' || str[i]=='x')

	 			cnt = cnt + 2;

	 		else if(str[i]=='c' || str[i]=='f' || str[i]=='i' || str[i]=='l' || 
	 			str[i]=='o' || str[i]=='r' || str[i]=='v' || str[i]=='y')

	 			cnt = cnt+3;

	 		else if(str[i]=='s' || str[i]=='z')

	 			cnt = cnt + 4;
	 	}

	 	cout <<"Case #" <<i+1<<": " <<cnt << endl;
	 	 	
	 }

	return 0;
}