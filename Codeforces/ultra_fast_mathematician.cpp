#include<bits/stdc++.h>
using namespace std;
int main()
{
   string num1,num2,sum;
   cin >> num1 >> num2;
   int len = num1.length();
   for(int i = 0; i<len; i++)
   {
      if(num1[i]==num2[i])
      {
         num1[i] = '0'; //sum[i] = '0';
      }
      else if(num1[i] != num2[i])
         num1[i] = '1'; //sum[i] = '1';
   }

   cout<<num1<<endl; //cout<<sum<<endl;


   return 0;
}