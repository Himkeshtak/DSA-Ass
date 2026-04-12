#include <iostream>
#include <vector>
using namespace std;

class DisjointSet
{
    vector<int> rank, parent;
    public:
    DisjointSet(int n)
    {
        rank.resize(n+1, 0);
        parent.resize(n+1);
        for(int i = 0; i<=n ; i++)
        {
            parent[i] = i;  //one based indexing kar rhe yaha par is liye parent node mien iss 
        }                   // value ko rakha gaya hai
        
    }

    //Find the ultimate parent 
    int findUPar(int node)
    {
        if(node == parent[node])     // If the node is the parent node
        {
            return node;
        }
        return findUPar(parent[node]);  //if its not the ultimate parent then go to its parent and then recursively to its parent parent
    }   // this is the normal logarithmic time , but we need the path compression 
        // that whenever anyone comes in the futuere and ask for the parents parent then I will tell them the stored amswer 
    
    void unionByRank(int u, int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        if(ulp_u == ulp_v)  // dono ke parent ultimately smae hi nikala
        {
            return;
        }
        if(rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;     //agar v ki rank badi hai u se to ,parent of u goes and get attacjed to the v 
        }
        else if(rank[ulp_v] < rank[ulp_u])
        {
            parent[ulp_v] = ulp_u;    //paremt of v goes and get attached to u (yes this statement is correct)
        }
        else{
            parent[ulp_v] = ulp_u;      // agar dono ki rank barabar hai to kisiko bhi kisime bh ad kardo koi farak nhi padta     
            rank[ulp_u]++;              // v attached to u so the larger one will grow in size
        }
    }

};
