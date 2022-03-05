#include<stdio.h>
int main()
{
    int d,m,y;
    scanf("%d",&d);

    y=d/365;
    d= d-(y*365);
    m=d/30;
    d= d-(m*30);
    printf("%d ano(s)\n",y);
     printf("%d mes(es)\n",m);
      printf("%d dia(s)\n",d);
    return 0;


}
