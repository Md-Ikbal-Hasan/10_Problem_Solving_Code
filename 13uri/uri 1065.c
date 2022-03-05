#include <stdio.h>

int main()
{
int  even=0,odd=0,pos=0,neg=0,n,i;

for(i=1;i<6;i++)
{
    scanf("%d",&n);


    if(n%2==0)
        even++;
    if(n%2!=0)
        odd++;
    if(n>0)
        pos++;
    if(n<0)
        neg++;

}
printf("%d valor(es) par(es)\n",even);
printf("%d valor(es) imper(es)\n",odd);
printf("%d valor(es) positivo(es)\n",pos);
printf("%d valor(es) negativo(es)\n",neg);
 return 0;
}
