#include <bits/stdc++.h>
using namespace std ;
#define mx 100
vector <int> G[mx] ;
int vis[mx] ;
int lev[mx] ;

void see_list(int nodes , int edges) {
	cout << "\nAdjacency List : \n" ;
	for(int i = 1 ; i <= nodes ; i++) {
		cout << i << " -> " ;
		for(int j = 0 ; j < G[i].size() ; j++) {
			cout << G[i][j] << " , " ;
		}
		cout << "\n" ;
	}
}

void DFS(int u) {
	if(vis[u] == 0)
		cout << u << " " ;
	vis[u] = 1 ;
	for(int i = 0 ; i < G[u].size() ; i++) {
		int v = G[u][i] ;
		if(vis[v] == 0) {
			DFS(v) ;
		}
	}
}

int main() {
	int nodes , edges ;
	cin >> nodes >> edges ;
	for(int i = 0 ; i < edges ; i++) {
		int u , v ;
		cin >> u >> v ;
		G[u].push_back(v) ;
		G[v].push_back(u) ;
	}
	see_list(nodes , edges) ;
	/*BFS(nodes , 1) ;
	Fill_Zero(nodes) ;*/
	cout << "\nDFS travarse sequence : " ;
	DFS(1) ;
	cout << "\n" ;
    return 0 ;
}
