#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tst, i, j, k;
    scanf("%d", &tst);
    while(tst--)
    {
        int n, ara[10];
        for(i=0; i<10; i++) ara[i]=0;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            j = i;
            while(j!=0)
            {
                k=j%10;
                ara[k]++;
                j/=10;
            }
        }
        for(i=0; i<9; i++) 
        cout<<ara[i]<<" ";
    
        cout<<ara[9]<<endl;
    }
    return 0;
}