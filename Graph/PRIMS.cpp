#include <iostream>
#include <climits>
using namespace std;

#define V 5 //number of vertices

//Function ot find the minimum key vertex
int minKey(int key[], bool mstSet[])
{
    int min = INT_MAX, min_index;

    for(int v=0; v < V; v++)
    {
        if(mstSet[v] == false && key[v] < min) 
        // YEH check karta hai ki node MST mein nhi hai and uska key 
        //current minimum se chota hai 
        {
            //naya minimum mil gaya , store kar lo
            min = key[v];
            min_index = v;
        }
    }

    //Jo sabse chhota node mila → uska index return karo
    return min_index;
}

// Function to priont the final MST 
void printMST(int parent[], int graph[V][V])
{
    cout << "Edge \tWeight\n";

    for (int i = 1; i< V; i++)
    {
        cout << parent[i] << " - " << i
             << "\t" << graph[i][parent[i]] << endl; 
    }
}

//prims algorithm
void primMST(int graph[V][V])
{
    int parent[V]; // stores MST
    int key[V];    // minimum weights
    bool mstSet[V];// included in MST or not

    // Step - 1 : initialize
    for (int i = 0; i < V ; i++)
    {
        key[i] = INT_MAX;
        mstSet[i] = false;
    } 

    key[0] = 0;     // start from node 0
    parent[0] = -1;  //root

    // Step-2 : MST banane ke liye loop
    for(int count = 0 ; count < V-1 ; count++)
    {
        int u = minKey(key , mstSet);  //minimum key vertex , Jo node MST mein nhi
        // aaur minimum weight ka hai usko pick karo
        mstSet[u] = true;              // include in MST, MST mein daal do

        // Step -3 : Update adjacent vertices abhi jo minkey mila use saare neighbours
        // update karo ki kon hai uske aas paas 
        for( int v = 0; v < V; v++)
        {
            if(graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
            //Check 3 cheezein:
            //Edge exist karta hai
            //Node MST mein nahi hai
            //Naya edge cheaper hai
            {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }
    printMST(parent, graph);
}

// minKey() is Cheapest node finder
//Simple Example
//
//Suppose:
//
//key[]    = [0, 2, 3, 6, 5]
//mstSet[] = [T, F, F, F, F]
//
//👉 Node 0 already MST mein hai
//
//Now function check karega:
//
//Node 1 → key = 2
//Node 2 → key = 3
//Node 3 → key = 6
//Node 4 → key = 5
//
//👉 Minimum = 2 → index = 1
//
//✔ Return: 1