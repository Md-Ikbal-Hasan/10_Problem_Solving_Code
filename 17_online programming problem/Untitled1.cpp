#include <bits/stdc++.h>

using namespace std ;
int dp[10][10] ;

int lcs(int A[],int B[],int n,int m){

	for(int i = 0 ; i <= n ; i++) {
		for(int j = 0 ; j <= m ; j++) {
			if(i == 0 || j == 0) {
				dp[i][j] = 0 ;
			}
			else if(A[i - 1] == B[j - 1] ) {
				dp[i][j] = 1 + dp[i - 1][j - 1] ;
			}
			else {
				dp[i][j] = max(dp[i - 1][j] , dp[i][j - 1]) ;
			}
		}
	}
	return dp[n][m];
}

int main() {
	string A = "abcde" ;
	string B = "kbacdle" ;
	int n = 5 ;
	int m = 7 ;
	/*int dp[10][10] ;
	for(int i = 0 ; i <= n ; i++) {
		for(int j = 0 ; j <= m ; j++) {
			if(i == 0 || j == 0) {
				dp[i][j] = 0 ;
			}
			else if(A[i - 1] == B[j - 1] ) {
				dp[i][j] = 1 + dp[i - 1][j - 1] ;
			}
			else {
				dp[i][j] = max(dp[i - 1][j] , dp[i][j - 1]) ;
			}
		}
	}*/
	//print the grid....
	/*
	for(int i = 0 ; i <= n ; i++) {
		for(int j = 0 ; j <= m ; j++) {
			cout << dp[i][j] << " " ;
		}
		cout << "\n" ;
	}*/
	cout << "\nLCS : " ;
	int x = lcs(A,B,n,m);
	cout << x << "\n" ;
	return 0 ;
}

