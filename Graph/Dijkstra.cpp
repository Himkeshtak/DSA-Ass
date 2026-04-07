#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution
{
    public:
    //Function to find the shortest distance of all the vertices
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq ;
        vector<int> dist(V);
        for(int i = 0; i<V ; i++)
        {
            dist[i] = 1e9;
        }

        dist[S] = 0;     //Distance of the source from the source is obv 0
        pq.push({0,S});  //Push that in the priority queue

        while(!pq.empty())  //Iterate in the priority queue
        {
            int dis = pq.top().first;  // pair ka first element matlab ki weight of the edge
            int node = pq.top().second;  // pair ka second element matlab ki node number
            pq.pop();                    // Erase that element from the priority queue

            for(auto it : adj[node])
            {
                int edgeweight = it[1];
                int adjNode = it[0];

                if(dis + edgeweight < dist[adjNode])  //agar mujhe koi aur choti distance mili to
                {
                    dist[adjNode] = dis + edgeweight;  //updating the better distance
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }
        return dist;
    }
};

// this is the equivalent loop as of the auto it wala loop
//for(int i = 0; i < adj[node].size(); i++)
//{
//    vector<int> it = adj[node][i];
//}

int main()
{
    int V = 5;

    // MUST match: vector<vector<int>> adj[]
    vector<vector<int>> adj[V];

    // {adjNode, weight}
    adj[0].push_back({1, 2});
    adj[1].push_back({0, 2});

    adj[0].push_back({3, 6});
    adj[3].push_back({0, 6});

    adj[1].push_back({2, 3});
    adj[2].push_back({1, 3});

    adj[1].push_back({3, 8});
    adj[3].push_back({1, 8});

    adj[1].push_back({4, 5});
    adj[4].push_back({1, 5});

    adj[2].push_back({4, 7});
    adj[4].push_back({2, 7});

    // Create object of class
    Solution obj;

    // Call function (VERY IMPORTANT: pass V, adj, source)
    vector<int> result = obj.dijkstra(V, adj, 0);

    // Print result
    cout << "Shortest distances from source:\n";
    for (int i = 0; i < V; i++)
    {
        cout << i << " -> " << result[i] << endl;
    }

    return 0;
}