#include<bits/stdc++.h>
using namespace std;
int main()
{
    int low=0,upr=0;
    char str[1005];
    scanf("%s",&str);


    if(str[0]>='a'&& str[0]<='z')
            str[0]= str[0] -32;


    printf("%s\n",str);

    return 0;
}

