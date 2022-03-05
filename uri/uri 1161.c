#include <stdio.h>

int main()
{
  long long int n,x, fact = 1,factt=1;
int i;

  scanf("%lld %lld", &n,&x);

  for (i = 1; i <= n; i++)
    fact = fact * i;

     for (i = 1; i <= x; i++)
    factt = factt * i;

  printf("%lld\n",fact+factt);

  return 0;
}
