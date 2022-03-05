#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string b;
        cin>>b;
        int len = b.size();
        string a = b.substr(0, 2);
        if(len>2)
        {
            for(int i = 3; i <len; i=i+2)
            {
                a = a + b[i];
            }
        }

        cout<<a<<endl;

    }


    return 0;
}

