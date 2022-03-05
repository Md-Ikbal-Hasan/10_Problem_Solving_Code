#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,x,y,sum=0;
   while(1)
   {
    scanf("%d %d",&x,&y);

    if(x<=0 || y<=0)
    {
     break;
    }

     else
     {
       // sum=0;
        if(x>y)
       {
           swap(x,y);
       }

   for(int i=x;i<=y;i++)
   {
       printf("%d ",i);
       sum=sum+i;
   }
    printf("Sum=%d\n",sum);
     }
}
return 0;

}

