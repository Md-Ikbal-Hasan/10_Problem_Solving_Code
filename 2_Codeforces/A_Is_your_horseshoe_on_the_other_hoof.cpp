#include<bits/stdc++.h>
using namespace std;
int x;
vector<int> vec;
int main()
{
   int cnt= 1;
   for(int i=1; i<=4 ;i++)
   {
   	cin>>x;
    vec.push_back(x)
 }
 sort(vec.begin(), vec.end());

 for(int i=0 ; i<=2 ; i++)
 {
    if(vec[i] != vec[i+1])
      cnt++;
}
cout<<4-cnt<<endl;
}