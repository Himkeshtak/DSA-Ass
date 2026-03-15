#include <iostream>
using namespace std;

int main()
{
    int n, m; //here n stands for number of node and m for total no.of edges
    cin>>n>>m;
    // graph to be made here
    int adj[n+1][n+1];

    //by running this loop we take the input as twon numbers representing the node between the them
    // those two no. represent the nodes 
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;

        // for undirected graphs if 1 is connected to 2 then 2 is also connecterd to 1
        //that's why at both the combinations we marks as 1
    }
    return 0;
}

// Time complexity = O(n)
// space complexity = O(n^2)