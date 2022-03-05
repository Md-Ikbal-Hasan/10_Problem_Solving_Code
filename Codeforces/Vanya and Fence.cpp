#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,sum=0,i,j,arr[1010];
    scanf("%d %d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>h)
        {
            sum=sum+2;
        }
        else if(arr[i]<=h)
            sum= sum+1;

    }
    printf("%d\n",sum);

    return 0;
}

