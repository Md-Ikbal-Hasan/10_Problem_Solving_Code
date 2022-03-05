#include<stdio.h>
int main()
{
    int a,b,c,d;
    float e,f,total;
    scanf("%d %d %f",&a,&b,&e);
    total=b*e;

    scanf("%d %d %d",&c,&d,&f);
    total= total+ d*f;
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}
