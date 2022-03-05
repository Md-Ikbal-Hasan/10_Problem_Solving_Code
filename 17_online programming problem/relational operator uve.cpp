#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int x,y;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld %lld",&x,&y);
        if(x>y)
            printf(">\n");
        else if(x<y)
            printf("<\n");
        else
            printf("=\n");
    }

    return 0;
}
