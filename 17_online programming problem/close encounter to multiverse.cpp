#include<bits/stdc++.h>
using namespace std;
int main()
{    int t,n,i,j,ld,cnt=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        while(n!=0)
        {
            ld= n%10;
            if(ld==3 || ld==7)
            {
                cnt=1;
            break;
            }
            n = n/10;

        }
        if(cnt==0)
        {
            printf("Welcome\n");
        }
        else if(cnt==1)
            printf("Danger\n");
            cnt=0;

    }



    return 0;
}
