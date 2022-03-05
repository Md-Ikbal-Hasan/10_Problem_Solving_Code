
#include<bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)
int main()
{
int a,b;
    double c,d,e,f,g,h,r;
    scanf("%d", &b);
    for(a=1; a<=b; a++)
    {
        scanf("%lf", &r);
        c=((r+r)*(r+r))-(PI*r*r);
        cout<<PI<<endl;
        printf("Case %d: %.2lf\n",a,c);
    }

    return 0;
}