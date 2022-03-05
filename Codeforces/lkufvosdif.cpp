#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,i;
  cin>>n;
  int arr[n],sum1=0,sum2=0;
  for(i=0;i<n;i++)
    cin>>arr[i];
  for(i=0;i<n;i++){
    if(arr[i]<arr[n-1]){
                sum2=sum2+arr[n-1];
    n--;

    }
        else
           sum1=sum1+arr[i];
           i++;


  }
   cout<<sum1<<" "<<sum2<<endl;
  }



