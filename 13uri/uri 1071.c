#include<stdio.h>
int main()
{
    int x,y,sum=0,temp,i;
    scanf("%d %d",&x,&y);
    if(y<x)
    {
       temp=x;  //how to do using swap function??
       x=y;
       y=temp;
    }

   for(i=x+1; i<y;i++)
   {
       if(i%2==1 || i%2==-1)
       {
           sum=sum+i;
       }
   }

 printf("%d\n",sum);
    return 0;

}
