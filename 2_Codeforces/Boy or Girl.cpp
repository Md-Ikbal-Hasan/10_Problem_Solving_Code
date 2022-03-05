#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,j,len,cnt=1,flag;
    cin>>str;
    len= str.length();
   for(i=1;i<len;i++)
   {
       for(j=i-1; j>=0;j--)
       {
           if(str[i]!=str[j])
            flag=1;
           else{
            flag=0;
            break;}
       }
       if(flag==1){
        cnt++;
        flag=0;}
   }

   if(cnt%2==0)
   cout<<"CHAT WITH HER!"<<endl;
   else
    cout<<"IGNORE HIM!"<<endl;


    return 0;
}


