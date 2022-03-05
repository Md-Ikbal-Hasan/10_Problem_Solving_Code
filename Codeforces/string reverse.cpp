#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    char tmp;
    cin>>str;
    int len=str.length()-1;
   for(int i=0;i<len;i++,len--)
   {
       tmp=str[i];
       str[i]=str[len];
       str[len]=tmp;

   }
   cout<<str;
    return 0;
}

