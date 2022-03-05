#include<stdio.h>
int main(void)
{
    int i=1;
   print:
       printf("%d\t",i);
       i++;
       if(i<5)
        goto print;
}
