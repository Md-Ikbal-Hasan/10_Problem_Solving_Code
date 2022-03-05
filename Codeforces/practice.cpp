#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int k1,k2,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>k1>>k2;
        int arrk1[k1+5],arrk2[k2+5];
        int flag=0;
        for(int i=0; i<k1;i++)
        {
            cin>>arrk1[i];
        }
         for(int i=0; i<k2;i++)
        {
            cin>>arrk2[i];
        }

         for(int i=0; i<k1;i++)
        {
            if(arrk1[i]==n)
            {
                flag=1;
                break;
            }
        }

         for(int i=0; i<k2; i++)
        {
            if(arrk2[i]==n)
            {
                flag=2;
                break;
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else if(flag==2)
            cout<<"NO"<<endl;

    }


    return 0;
}
