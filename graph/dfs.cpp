#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> graph[], int u, int v)
{
	graph[u].emplace_back(v); 
	graph[v].emplace_back(u);
}


void DFS( vector <int> graph[], int start)
{
	vector<bool> visited(graph->size(), false);
	stack<int> st;
	st.push(start);

	visited[start] = true;

	while(!st.empty())
	{
		int v = st.top();
		cout<< v <<" ";
		st.pop();
		for(auto it = graph[v].begin(); it!=graph[v].end(); it++)
		{
			if(!visited[*it])
			{
				st.push(*it);
				visited[*it] = true;
			}
		}

	}
}

void dfs_recursive(vector<int> graph[], vector<bool>& visited, int node)
{
    visited[node] = true;
    cout << node << "  ";
    for (auto i = graph[node].begin(); i != graph[node].end(); i++) {
        if (!visited[*i])
           dfs_recursive(graph, visited, *i);
    }
}


int main()
{
	int V = 7;
	vector<int> graph[V];

	addEdge(graph, 0 , 1);
	addEdge(graph, 0 , 3);
	addEdge(graph, 1 , 2);
	addEdge(graph, 2 , 3);
	addEdge(graph, 2 , 6);
	addEdge(graph, 3 , 4);
	addEdge(graph, 4 , 5);
	addEdge(graph, 5 , 6);

	cout<<"DFS traversal starting from node 0 : ";
	DFS(graph, 0);
	cout<<endl;

	cout << "DFS traversal recursive starting from node 0:" << "  ";
    vector<bool> visited(graph->size(), false);
    dfs_recursive(graph, visited, 0);


	

	return 0;
}