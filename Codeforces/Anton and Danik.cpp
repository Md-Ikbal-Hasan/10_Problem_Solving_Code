#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,j,a=0,d=0;

    cin>>n;
    char s[n+5];
    scanf("%s",&s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
            a++;
        else if(s[i]=='D')
            d++;
    }
    if(a>d)
        printf("Anton\n");
    else if(d>a)
        printf("Danik\n");
    else
        printf("Friendship\n");



    return 0;
}
