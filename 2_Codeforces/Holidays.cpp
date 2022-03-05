#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int maxholi,minholi;
    if(n%7==0)
    {
        maxholi=n/7 *2;
        minholi=n/7 *2;
        cout<<minholi<<" "<<maxholi;
    }
    else if(n%7==1)
    {
        minholi= n/7 *2;
        maxholi= (n/7*2)+1;
         cout<<minholi<<" "<<maxholi;
    }

     else if(n%7==2)
    {
        minholi= n/7 *2;
        maxholi= (n/7*2)+2;
         cout<<minholi<<" "<<maxholi;
    }

     else if(n%7==3 || n%7==4 || n%7==5)
    {
        minholi= (n/7 *2);
        maxholi= (n/7*2)+2;
        cout<<minholi<<" "<<maxholi;}

     else if(n%7==6)
    {
        minholi= (n/7 *2) +1;
        maxholi= (n/7*2)+2;
        cout<<minholi<<" "<<maxholi;
    }


    return 0;
}
