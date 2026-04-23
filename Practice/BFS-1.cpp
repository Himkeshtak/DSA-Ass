#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class BFS
{
    public:
    
        vector<int> bfs(int V, vector<int> adj[])
        {
            int vis[V] = {0};
            vector<int> bfs;
            queue<int> q;

            vis[0] = 1;
            q.push(0);

            while(!q.empty())
            {
                int node = q.front();
                q.pop();
                bfs.push_back(node);

                for(auto it : adj[node])
                {
                    if(!vis[it])
                    {
                        vis[it] = 1;
                        q.push(it);
                    }
                }
            }
            return bfs;
        }
    
};

int main()
{
    return 0;
}