#include<stdio.h>
int main(void)
{
    int x=10,y;
    y =++x + x +x + x++ + ++x +x;
    printf("y=%d\n",y);

}
