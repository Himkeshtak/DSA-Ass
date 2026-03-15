#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    int n, m;
    vector<int> adj[m];

    for (int i=0; i<m ; i++)
    {
        int u,v, weight;
        cin >> u >>v >> weight;
        adj[u].push_back((v,weight));

    }
    return 0;
}