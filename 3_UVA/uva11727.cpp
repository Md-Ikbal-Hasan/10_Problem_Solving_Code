#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,s1,s2,s3;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       scanf("%d %d %d",&s1,&s2,&s3);

        if((s1>s2 && s1<s3) ||(s1>s3 &&s1<s2))
        printf("Case %d: %d\n",i,s1);

        else if ((s2>s1 && s2<s3) ||(s2>s3 &&s2<s1))
            printf("Case %d: %d\n",i,s2);

        else
            printf("Case %d: %d\n",i,s3);
   }
    return 0;
}


