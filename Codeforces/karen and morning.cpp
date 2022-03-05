#include<bits/stdc++.h>
using namespace std;
int rev(int s)
{
    int p=0;
    while(s)
    {
         p = p*10 + s%10;
         s= s/10;
    }
    return p;

}
int main()
{

    int hr;
    cin>>hr;
    cout<<rev(hr)<<endl;

    return 0;
}

