#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,n,s,t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a>>b>>n>>s;
        if(s/n<=a)
        {
            s=s%n;
            if(s<=b)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }

        else if(s/n>a)
        {
            s=s-(n*a);
            if(s<=b)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }
    }

    return 0;
}
/* another way to solve this problem
int main(){


    int q;

    cin >> q;

    while(q--){

        int n, a,b,s;
        cin >> a >> b >> n >> s;

        int tto = s / n;
        int have = min(tto, a);
         have = have * n;
        have += b;


        if(have >= s)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}*/
