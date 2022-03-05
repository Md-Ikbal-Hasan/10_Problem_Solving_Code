#include<stdio.h>
int main()
{
    int n,a;
    float price =0.0 ;

    scanf("%d %d",&n,&a);
    switch(n)
    {
        case 1:
        price= 4.0*a;
        break;

        case 2:
        price = 4.5*a;
        break;

         case 3:
        price= 5.0*a;
        break;

         case 4:
        price= 2.0*a;
        break;

         case 5:
        price= 1.5*a;
        break;
    }


    printf("Total: R$ %f\n",price);
}
