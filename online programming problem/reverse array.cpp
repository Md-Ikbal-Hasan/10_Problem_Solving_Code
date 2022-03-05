#include<bits/stdc++.h>
using namespace std;
int main() {

   int n,arr[1005],sum=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {

    scanf("%d",&arr[i]);
   }
  for(int j=n-1;j>=0;j--)
  {
      printf("%d ",arr[j]);
  }
}



