#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void dfs(int node, vector<int> adj[], stack<int> st, int vis[])
{   
    vis[node] = 1;
    st.push(0);
    
    for(auto it : adj[node])
    {
        if(!vis[node])
        {
            dfs(node, adj, st, vis);
        }
        st.push(0);
    }
}

int main()
{
    cin<<
    return 0;
}