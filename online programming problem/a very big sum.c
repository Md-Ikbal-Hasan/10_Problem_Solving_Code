#include<stdio.h>
int main()
{
     int num,n,pos=0,neg=0,zero=0;
     float s,t,r;
     scanf("%d",&n);


     for(int i=0;i<n;i++)
     {
         scanf("%d",&num);
         if(num>0)
         {
             pos=pos+1;
         }
         else if(num<0)
         {
             neg=neg+1;
         }
         else
            zero=zero+1;
     }

     s=(float)pos/n;
     t=(float)neg/n;
     r=(float)zero/n;
     printf("%.6f\n%.6f\n%.6f\n",s,t,r);
}



