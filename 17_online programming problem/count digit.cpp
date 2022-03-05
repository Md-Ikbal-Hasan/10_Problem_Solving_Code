#include<bits/stdc++.h>
using namespace std;
int main()
{
    int long long n,x,cnt=0,rem,rvsnm=0;
    scanf("%lld",&x);
    n=x;
    while(n!=0)
    {
        rem= n%10;
        rvsnm = rvsnm*10+ rem;
        n=n/10;
        ++cnt;
    }

    printf("\n number of digit: %lld",cnt);
    printf("\n reverse number is: %lld",rvsnm);

    if(rvsnm==x)
     printf("\n Its a palindrome");

     else
        printf("\n its not palindrome");

    return 0;
}
