#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        cin>>x>>y>>z;
        if( (x==0&&y==0) || (x==0 &&z==0) || (y==0&& z==0)|| (x==0&&y==0&&z==0))
        {

        }
        else
            cnt++;


    }
    printf("%d\n",cnt);

return 0;
}
