#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,A[100],B[100],i,j,sum=0,k;
    scanf("%d %d",&a,&b);

    for(i=0;i<a;i++)
    {
        scanf("%d",&A[i]);
    }

    for( i=0;i<b;i++)
    {
        scanf("%d",&B[i]);
    }

     for(i=0;i<100;i++)
     {
         for(j=0;j<100;j++)
            sum = A[i]+B[j];
         for(k=0;i<100;k++)

             if(sum !=A[k] && sum != B[k])
                printf("%d %d\n",A[i],B[i]);

     }


    return 0;
}
