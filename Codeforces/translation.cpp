#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int flag=0;
    int len= str1.length();
    for(int i=0;i<len;i++)
    {
        if(str1[i]==str2[len-1-i])
            flag=0;
        else{
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
