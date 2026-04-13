#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Topological_sorting{
    private:
        void dfs(int node, int vis[], stack<int> st, vector<int> adj[])
        {
            vis[node] = 1 ;// yeh visited array wale ke liye nhi toposort mein clal ho rha , vis array ke saare
            //elements ko 0 se initialize kar rakha uss function mein
            for(auto it : adj[node]) // this iterates through all the elements of the list or vector we have
            {
                if(!vis[node])
                {
                    dfs(it, vis, st, adj);
                }
            }

            st.push(node); // jab use node ke saare neighbours check kar liye then uss node ko stack mein daal do
        }

    public:
        // Function to return the list containing vertices in the topological order 
        vector<int> TopoSort(int V, vector<int> adj[])
        {
            int vis[V] = {0}; //Initializing the visited array values as zero , will make them 1 as we visit the nodes
            stack<int> st; // initializing the stack in which the node will be pushed as soon as it is visited
            
            for(int i=0; i < V; i++)
            {
                if(!vis[i])
                {
                    dfs(i, vis, st, adj);
                }
            }

            // Now take the elements from the Stack and push them into the final answer list one by one
            vector<int> ans;
            while(!st.empty())
            {
                ans.push_back(st.top());
                st.pop();
            }
            return ans;
        }
};