#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string str;
	while(t--)
	{
		cin>>str;
		int len= str.length();
		int cnt=0,flag=0;
		if(len==1)
		{

		if(str[0]=='?')
		{
		    str[0]='a';
			cout<<str<<endl;
		}
		else if(str[0]!='?')
		{
			cout<<str<<endl;
		}
	}

	else if(len>1)
	{


		for(int i=0; i<len-1; i++)
		{
			if(str[i]!='?' && (str[i]==str[i+1]))
			{
				flag=1;
				break;
			}
			else
			{

			}
		}

		if(flag==1)
		{
			cout<<"-1"<<endl;
		}
		else if(flag==0)
		{//....
			if(str[0]=='?')
			{
				if(str[1]=='?')
					str[0]='a';

				else if(str[1]=='a')
					str[0]='b';

				else if(str[1]=='b')
					str[0]='a';

				else if(str[1]=='c')
					str[0]='a';
			}
			else if(str[0]!='?')
            {
                if(str[1]=='?')
					str[0]='a';

				else if(str[1]=='a')
					str[0]='b';

				else if(str[1]=='b')
					str[0]='a';

				else if(str[1]=='c')
					str[0]='a';
            }


				for(int i=1;i <len; i++)
				{
					if(i==(len-1))
					{
						if(str[i-1]=='a')
					    str[i]='b';

                        else if(str[i-1]=='b')
					     str[i]='a';

				        else if(str[i-1]=='c')
					    str[i]='a';
					}


					else
					{
					if(str[i]=='?')
					{
						if(str[i-1]=='a' && str[i+1]=='b')
							str[i]='c';
						else if(str[i-1]=='a' && str[i+1]=='c')
							str[i]='b';
						else if(str[i-1]=='b' && str[i+1]=='a')
							str[i]='c';
						else if(str[i-1]=='b' && str[i+1]=='c')
							str[i]='a';
						else if(str[i-1]=='c' && str[i+1]=='a')
							str[i]='b';
						else if(str[i-1]=='c' && str[i+1]=='b')
							str[i]='a';
						else if(str[i-1]=='a' && str[i+1]=='a')
							str[i]='b';
						else if(str[i-1]=='b' && str[i+1]=='b')
							str[i]='a';
						else if(str[i-1]=='c' && str[i+1]=='c')
							str[i]='b';
						else if(str[i-1]=='a' && str[i+1]=='?')
							str[i]='b';
						else if(str[i-1]=='b' && str[i+1]=='?')
							str[i]='a';
						else if(str[i-1]=='c' && str[i+1]=='?')
							str[i]='b';

					}
				}
			}
		}
		//......
		cout<<str<<endl;
	}
}
return 0;

}



