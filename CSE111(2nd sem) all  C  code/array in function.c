#include<stdio.h>
int maximum(int x[])
{
    int i;
    int max=x[0];
    for(i=1;i<6;i++)
    {
        if(max<x[i]);
        max=x[i];
    }
    return max;
}


int main()
{
    int a[]={10,20,30,40,50,90};
    int value=maximum(a);
    printf("Maximum value is:%d",value);
}
