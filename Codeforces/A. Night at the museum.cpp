#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    char current = 'a';
    int ans= 0 ;
    int len = str.length();
    for(int i=0; i<len; i++)
    {
        int diff =abs(int(current - str[i]));
        ans = ans + min(diff, 26-diff);
        current = str[i];
    }
    cout<<ans<<endl;




return 0;
}
