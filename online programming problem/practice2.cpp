#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2;

    int i,j, len1,len2,len3;
    len1=s1.length();
    len2=s2.length();
    int sum[300],c=0,x;

    for(i=len1 -1 ,j=0; i>=0 ;i--,j++)
    {
        x= s1[i]-'0' + s2[i]-'0' + c ;
        sum[j]= x%10;
        c=x/10;

    }
    if(c>0)
    {
        sum[j++]=c;
    }
    len3=sizeof(sum)/sizeof(sum[0]);

    for(j=len3 - 1;j<=0;j--)
    {
        cout<<sum[j];
    }



    return 0;
}
