#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,j,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        if(x>y)
        {
            swap(x,y);
        }
        for( j=x;j<=y;j++)
        {
            if(j%2==1)
            sum= sum+j;
        }

        printf("Case %d: %d\n",i,sum);
        sum=0;
    }


    return 0;
}
