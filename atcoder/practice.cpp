#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int len = str.length();
    bool ans = true;
     for(int i=0; i<len; i++)
     {
        if(i%2==0)
        {
            if(str[i]>='a' && str[i]<='z')
                ans= true;
            else
            {
                ans = false;
                break;
            }
        }
        else if(i%2 != 0)
        {
            if(str[i]>='A' && str[i]<='Z')
                ans  =  true;
            else
            {
                ans  = false;
                break;
            }
        }
     }


    if (ans ==true)
        cout<<"Yes"<<endl;
    else if(ans == false)
        cout<<"No"<<endl;


    return 0;

}
