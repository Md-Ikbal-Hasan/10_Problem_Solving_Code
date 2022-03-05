#include<stdio.h>
int a(int a,int b)
{
    return a+b;
}
int s(int a,int b)
{
    return a-b;
}
int m(int a,int b)
{
    return a*b;
}
int d(int a,int b)
{
    return a/b;
}
int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);

    printf("The sum is %d\n", a(x,y));
     printf("The sub is %d\n",s(x,y));
      printf("The mul is %d\n", m(x,y));
       printf("The div is %d\n", d(x,y));
       return 0;
}
