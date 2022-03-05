#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6][6],p,q,i,j,move=0;
    for(i=1;i<=5;i++)
     {
        for(j=1;j<=5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
     }

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(arr[i][j]==1)
                p=i;
                q=j;
                break;

        }
        break;
    }
    printf("%d %d",p,q);






 return 0;
}
