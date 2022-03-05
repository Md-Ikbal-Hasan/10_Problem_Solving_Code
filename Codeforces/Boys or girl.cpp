#include<bits/stdc++.h>
#define pi 3.1416
using namespace std;
int main()
{

    string str;
    cin>>str;
    int sz= str.length();
    int cnt=0,wcnt=1;
    cout<<"size of string:"<<sz<<endl;
    for(int i=1;i<sz;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(str[i]==str[j])
            {
               cnt=1;
                break;}

            else
                continue;
        }
            if(cnt==0)
                wcnt++;
                else{};
    }
    printf("distinc char : %d\n",wcnt);


    return 0;
}

