#include<bits/stdc++.h>
using namespace std;


int main()
{

  long long int q,n,i;

  cin>>q;
  for(i=0;i<q;i++)
  {
      cin>>n;
      long long int sum=0,x,j;

      for(j=0;j<n;j++)
      {
          scanf("%lld",&x);
          sum=sum+x;
      }
      if(sum%n==0)
      {
          printf("%lld\n",sum/n);
      }
      else
        printf("%lld\n",sum/(n-1));

  }

    return 0;
}


