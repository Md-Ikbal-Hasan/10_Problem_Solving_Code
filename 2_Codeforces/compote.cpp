#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,lm,ap,pr;
    cin>>a>>b>>c;
    ap=b/2;
    pr=c/4;
    int compote =min(a,min(ap,pr));//calculate number of compote
    int ans= compote + (compote*2)+(compote*4);
    cout<<ans<<endl;

    return 0;
}
