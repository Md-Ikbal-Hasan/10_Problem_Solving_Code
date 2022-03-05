#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,cnt=0;
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0);
        cnt++;


    }
if(cnt==0)
        printf("prime ");
    else
        printf("not prime");

    return 0;
}
