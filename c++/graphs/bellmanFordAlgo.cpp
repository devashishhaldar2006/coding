#include <bits/stdc++.h>
using namespace std;
struct Edge {
    int u;
    int v;
    int wt;
};
void bellmanFord(int n, vector<Edge>& edges, int src) {
    vector<int> dist(n, INT_MAX);
    dist[src] = 0;
    // Relax all edges n - 1 times
    for(int i = 0; i < n - 1; i++) {
        bool changed = false;
        for(auto edge : edges) {
            int u = edge.u;
            int v = edge.v;
            int wt = edge.wt;
            if(dist[u] != INT_MAX && dist[u] + wt < dist[v]) {
                dist[v] = dist[u] + wt;
                changed = true;
            }
        }
        // Optimization
        if(!changed)
            break;
    }
    // Check for negative cycle
    for(auto edge : edges) {
        int u = edge.u;
        int v = edge.v;
        int wt = edge.wt;
        if(dist[u] != INT_MAX && dist[u] + wt < dist[v]) {
            cout << "Negative cycle exists\n";
            return;
        }
    }
    // Print shortest distances
    for(int i = 0; i < n; i++) {
        if(dist[i] == INT_MAX) cout << "INF ";
        else cout << dist[i] << " ";
    }
    cout << endl;
}