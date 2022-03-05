#include <stdio.h>
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a*b)/gcd(a, b);
}

int main()
{
    int a ,b,l;
    scanf("%d %d",&a,&b);
     l= lcm(a, b);
     printf("%d\n",l);
    return 0;
}
