#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[102];
    int len,small=0,capital=0;
    scanf("%s",str);
    len= strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            capital++;
        }
        else if(str[i]>='a' && str[i]<='z')
            small++;
    }


    if(capital>small)
    {

        printf("%s\n",strupr(str));
    }

else if(capital<small)
    {

        printf("%s\n",strlwr(str));
    }
    else if(capital==small)
    {

        printf("%s\n",strupr(str));
    }


    return 0;
}
