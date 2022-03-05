//BFS traversal for a undirected unweighted graph
#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> graph[], int u, int v)
{
	graph[u].emplace_back(v); 
	graph[v].emplace_back(u);
}

void BFS( vector <int> graph[], int start)
{
	vector<bool> visited(graph->size(), false);
	queue<int> q;
	q.push(start);

	visited[start] = true;

	while(!q.empty())
	{
		int v = q.front();
		cout<< v <<" ";
		q.pop();
		for(auto it = graph[v].begin(); it!=graph[v].end(); it++)
		{
			if(!visited[*it])
			{
				q.push(*it);
				visited[*it] = true;
			}
		}

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

	cout<<"BFS traversal starting from node 0 : ";
	BFS(graph, 0);


	

	return 0;
}
