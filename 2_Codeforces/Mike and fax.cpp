#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int k,cnt=0,i,j;
    cin>>str;
    int l=str.length();
    //palindrome
    for(i=0; i<l; i++)
    {
        if(str[i]==str[l-1-i])
            cnt=0;
        else
            cnt++;
    }
    if(cnt==0)
    {
        printf("palindrome");
    }
    else
        printf("Not palindrome");

    return 0;
}
