#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n,k,minans,maxans;
    cin>>n>>k;
    string str[n+5],pass;
    int i,j,cnt=0,strln[n+5];

    if(n==1 && k==1)
    {
        cout<<1<<" "<<1<<endl;
    }
    else{
    for(i=0;i<n;i++)
    {
        cin>>str[i];
    }
    cin>>pass;
    int plen=pass.length();

   /*calculate the length of string then store in strln and increase
   cnt if strln>plen*/

    for(i=0;i<n;i++)
    {
        strln[i]= str[i].length();
        if(strln[i]<plen)
            cnt++;
    }


    if(cnt==0)
    {
        minans= 1;
        maxans= n+ (n/k)*5;
    }
    else
    {
        minans= cnt+ (cnt/k)*5 + 1;
        maxans= (cnt+ (cnt/k)*5) + (n-cnt)+((n-cnt)/k)*5;
    }
    cout<<minans<<" "<<maxans<<endl;

}

    return 0;
}
