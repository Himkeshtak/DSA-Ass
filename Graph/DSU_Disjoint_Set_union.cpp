#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100
int parent[MAX];

//initialize
void make_set(int n)
{
    for(int i = 0; i < n; i++)
    {
        parent[i] = i;
    }
}

//find (simple)
int find(int x)
{
    if (parent[x] == x)
    {
        return x;
    }
    return find(parent[x]);
}

//  Union 
void union_set(int a, int b)
{
    int rootA = find(a);
    int rootB = find(b);

    if(rootA != rootB)
    {
        parent[rootB] = rootA;
    }
}