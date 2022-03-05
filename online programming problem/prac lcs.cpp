#include<bits/stdc++.h>
using namespace std;
int main()
{

    string a,b;
    cin>>a>>b;
    int n,m;
    n= a.size();
    m=b.size();
    int dp[n+5][m+5];

     for(int i=0;i<=n;i++)
     {
         for(int j=0;j<=m;j++)
         {
             if(i==0 || j==0)
                dp[i][j]=0;
                else if(a[i-1]==b[j-1])
                    dp[i][j]= 1+dp[i-1][j-1];
                else
                    dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
         }
     }

     //print the grid;
    for(int i = 0 ; i <= n ; i++) {
		for(int j = 0 ; j <= m ; j++) {
			cout << dp[i][j] << " " ;
		}
		cout << "\n" ;
	}


     cout<<"maximum lcs : "<<dp[n][m];

    return 0;

}
