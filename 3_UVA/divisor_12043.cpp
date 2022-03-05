#include<bits/stdc++.h>
using namespace std;
#define mxn 100000
long long cnt[mxn+5], sum[mxn+5];

vector<long long>vec[mxn+5];
void divisor()
{
   for(long long i=1;i<=mxn;i++)
   {
     
    for(long long j=i; j<=mxn ; j=j+i)
    {
    	//vec[j].push_back(i);
      cnt[j]++;
      sum[j]+=i;
    }

   }
}


int main()
{

   divisor();
   int t;
   cin>>t;
   long long a,b,k,i,j;

   while(t--)
   {
    cin>>a>>b>>k;
    long long ans1=0,ans2=0;
    int flag = 0 ;
    for( i=a;i<=b;i++)
    {
      if(i%k==0)
      {
        a=i;
        flag = 1 ;
        break;
      }
    }

    for(i=a;i<=b && flag == 1;i=i+k)
    {
       ans1= ans1 + cnt[i];
       ans2= ans2+ sum[i];
    }
    cout<<ans1<<" "<<ans2<<endl;

   }

	return 0;
}