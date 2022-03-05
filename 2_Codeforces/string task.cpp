#include<bits/stdc++.h>
using namespace std;
int main()
{

    char str[205];
	int len, len2,i, j;

	gets(str);
	len=strlen(str);
	for(i=0; i<len; i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
		str[i]=='o' || str[i]=='u' ||str[i]=='y'|| str[i]=='A' ||
		str[i]=='E' || str[i]=='I' || str[i]=='O' ||
		str[i]=='U' || str[i]=='Y')
		{
			for(j=i; j<len; j++)
			{
				str[j]=str[j+1];
			}
		len--;
		}
	}

	len2=strlen(str);
	for(i=0;i<len2;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]= str[i] +32;

        printf(".%c",str[i]);
    }

return 0;

}
