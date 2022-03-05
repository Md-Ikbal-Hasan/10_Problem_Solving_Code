#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    float x,y,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f %f",&x,&y);

        if(y==0)
            printf("divisao impossivel\n");
        else

        printf("%.1f\n",x/y);
    }


return 0;
}
