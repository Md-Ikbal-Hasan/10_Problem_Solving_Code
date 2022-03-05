#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nodes ;
    while(cin >> nodes)
    {
        if(nodes == 0)
            break;
        int edges ;
        cin >> edges ;

        vector <int> adj[100000];
        int start ;
        for(int i = 0 ; i < edges ; i++){
            int x , y;
            cin >> x >> y;
            if(i == 0)
                start = x;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int color[10000];
        for(int i = 0 ; i < 10000 ; i++)
            color[i] = -1;

        int flag = 1;
        queue <int> q;

        //starting node
        color[start] = 0;
        q.push(start);

        //BFS starts Here
        while(!q.empty()){
            int u = q.front();
            q.pop();

            for(int i = 0 ; i < adj[u].size();i++){
                if(color[adj[u][i]] == -1){
                    if(color[u] == 0)
                        color[adj[u][i]] = 1;
                    else
                        color[adj[u][i]] = 0;
                    q.push(adj[u][i]);
                }
                else{
                    if(color[adj[u][i]] == color[u]){
                        flag = 0;
                        break;
                    }
                }
            }
            if(flag == 0)
                break;
        }
        if(flag == 1)
            cout << "BICOLORABLE.\n";
        else
            cout << "NOT BICOLORABLE.\n";
    }

    return 0;
}
