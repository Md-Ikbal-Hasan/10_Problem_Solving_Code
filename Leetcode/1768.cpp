#include<bits/stdc++.h>
using namespace std;
string addingstring(string str1, string str2)
{
	int len1 = str1.length();
	int len2 = str2.length();
	string ans;
	if(len1==len2)
	{
		for(int i = 0; i <len1; i++)
		{
			//cout<<str1[i]<<str2[i];
			ans = ans + str1[i] + str2[i];
		}
		cout<<endl;
	}

	else if(len1>len2)
		{
			for(int i = 0; i<len2; i++)
			{
				//cout<<str1[i]<<str2[i];
				ans = ans + str1[i] + str2[i];
			}
			for(int i=len2 ; i<len1; i++)
			{
				//cout<<str1[i];
				ans  = ans + str1[i];
			}
			cout<<endl;
		}
    
    else
    	{
			for(int i = 0; i<len1; i++)
			{
				//cout<<str1[i]<<str2[i];
				ans = ans + str1[i] + str2[i];
			}
			for(int i=len1 ; i<len2; i++)
			{
				//cout<<str2[i];
				ans = ans + str2[i];
			}
			cout<<endl;
		}
		return ans;
}


int main()
{
	string str1,str2;
	cin>>str1>>str2;
	string ans = addingstring(str1, str2);
	cout<<ans;
	

return 0;
}