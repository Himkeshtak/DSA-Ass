#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//source = Starting node , V  = total number of vertices
vector <int> dijkstra(int V, vector<vector<int>> adj[], int source)
{
    priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> dist(V);
    
    for(int i = 0; i<V ; i++)
    {
        dist[i] = 1e9;
    }
    
    dist[source] = 0;
    pq.push({0,source});
    
    while(!pq.empty())
    {
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for(auto it: adj[node])
        {
            int adjnode = it[0];
            int edgeweight = it[1];

            if(dis + edgeweight < dist[adjnode])
            {
                dist[adjnode] = dis + edgeweight;
                pq.push({dist[adjnode], adjnode});
            }
        }
    }
    return dist;
}

