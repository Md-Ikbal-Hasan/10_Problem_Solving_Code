#include<bits/stdc++.h>
using namespace std;
int main()
{
    int low=0,upr=0;
    char str[105];
    scanf("%s",&str);
    for(int i=0; str[i]!='\0' ;i++)
    {
        if(str[i]>='a' && str[i]<='z')
            low++;
        else if(str[i]>='A'&& str[i]<='Z')
            upr++;
    }

    if(upr>low)
    {
        for(int i=0; str[i]!='\0' ;i++)
    {
        if(str[i]>='a'&& str[i]<='z')
            str[i]= str[i] -32;

    }

    }
    else
    {
       for(int i=0; str[i]!='\0' ;i++)
    {
        if(str[i]>='A'&& str[i]<='Z')
            str[i]= str[i] +32;

    }
    }
    printf("%s",str);

    return 0;
}
