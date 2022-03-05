#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,p,q,r;
    cin>>p>>q>>r;
    a= abs(p-q)+abs(p-r);
    b= abs(q-p)+abs(q-r);
    c= abs(r-p)+abs(r-q);

     if (a <= b && a <= c)
        cout <<a<<endl;

    else if (b <= a && b <= c)
        cout << b << endl;

    else
        cout << c << endl;

    return 0;
}
