#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

struct Edge {
    int u, v, cost;
};

Edge edges[101010];
int parent[10101];

bool compare(Edge a, Edge b);
int find(int u);
void merge(int u, int v);

int main()
{
    memset(parent,-1,sizeof(parent));
    int ans = 0;
    int V, E; int a,b,c;
    cin >> V >> E;
    for (int i = 0; i < E; i++){
        cin >> a >> b >> c;
        edges[i].u = a;
        edges[i].v = b;
        edges[i].cost = c;
    }
    sort(edges, edges+E, compare);
    for (int i = 0; i < E; i++){
        if (find(edges[i].u) != find(edges[i].v)) {
            merge(edges[i].u, edges[i].v);
            ans += edges[i].cost;
        }
    }
    cout << ans;
}

int find(int u)
{
    if (parent[u] < 0)
        return u;
    return parent[u] = find(parent[u]);
}

void merge(int u, int v)
{
    u = find(u);
    v = find(v);
    if (u == v)
        return;
    if (parent[u] > parent[v])
        swap(u,v);
    parent[u]+=parent[v];
    parent[v]=u;
}

bool compare(Edge a, Edge b)
{
    return a.cost < b.cost;
}

