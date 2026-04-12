#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<int> adj[], vector<bool> &visited)
{
    visited[node] = true;
    cout << node << " ";

    for(auto it : adj[node])
    {
        if(!visited[it])
        {
            dfs(it, adj, visited);
        }
    }
}