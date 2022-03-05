#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
        if(n%2==0)
        {
            //int a = n/2;
            /*for(int i=0;i<a;i++)
            {
                cout<<"1";
            }*/
            while(n)
            {
                cout<<"1";
                n = n-2;
            }
            cout<<endl;
        }

        else
        {
            cout<<"7";
            n = n-3;
            while(n)
            {
                cout<<"1";
                n = n-2;
            }
        }
        cout<<endl;
    }
    return 0;
}

