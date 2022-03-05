#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> vecs;
    vector<string> vect;
    vecs.push_back("random");
    vect.push_back("random");
    int n,m;
    cin>>n>>m;
    string str;
    for(int i = 1; i<=n; i++)
    {
        cin>>str;
        vecs.push_back(str);
    }

    for(int i = 1; i<=m; i++)
    {
        cin>>str;
        vect.push_back(str);
    }

    int q;
    cin>>q;
    long long y;
    while(q--)
    {
        cin>>y;
        if(y%n==0)
            cout<<vecs[n];
        else
            cout<<vecs[y%n];
        if(y%m==0)
            cout<<vect[m]<<endl;
        else
            cout<<vect[y%m]<<endl;

    }
    return 0;
}
