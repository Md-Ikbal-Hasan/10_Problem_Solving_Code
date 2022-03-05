#include<bits/stdc++.h>
using namespace std;
void max_substring(string str)
{
    int len = str.size();
    int ans = 1, temp = 1;
    for(int i=0; i<len-1; i++)
    {
        if(str[i] == str[i+1])
        {
            temp++;
        }
        else
        {
            ans = max(temp,ans);
            temp = 1;
        }

    }
    ans = max(temp,ans);
    cout<<ans<<endl;

}
int main()
{

   string str;
   cin>>str;
   max_substring(str);



   return 0;

}


