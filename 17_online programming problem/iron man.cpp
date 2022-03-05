#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,temp,sub;
    scanf("%d",&x);
    temp=x;
    temp+=5;
    temp*=2;
    temp-=4;
    temp/=2;

    sub= x-temp;
    printf("%d\n",sub);
    return 0;
}
