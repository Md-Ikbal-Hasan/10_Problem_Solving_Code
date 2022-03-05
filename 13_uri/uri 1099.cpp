#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,x,y,sum=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d %d",&x,&y);
       if(x>y)
       {
           swap(x,y);

       }
       for(int j=x+1;j<y;j++)
       {
           if(j%2!=0)
           {
               sum=sum+j;
               //printf("odd number are: %d\n",j);

           }
       }
       printf("%d\n",sum);
       sum=0;
   }
 return 0;
}
