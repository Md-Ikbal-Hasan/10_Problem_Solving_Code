#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n+1][n+1];
	int left_dig=0 , right_dig=0 ;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			cin>>arr[i][j];
		}
	}
	
    
    for(int i=1,j=1; i<=n; i++,j++)
    {
    	left_dig += arr[i][j];  //sum of left diagonal
    	
    }

     for(int i=1,j=n; i<=n; i++,j--)
    {
    	right_dig += arr[i][j];    //sum of right diagonal
    }


    int ans = abs(left_dig - right_dig);
    cout<<ans<<endl; 
	
}