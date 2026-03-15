#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n , m;
    vector<int> adj[n+1];

    // For undirected graphs
    //space complexity = O(2E)    where E = Edges
    for (int i = 0; i<m ;i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //for directed graphs
    // Space complexity = O(E)
    //Time complexity  = O(m)    where m = Total no. of edges
    for (int i = 0; i<m ;i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        //adj[v].push_back(u);
    }
    return 0;
}
