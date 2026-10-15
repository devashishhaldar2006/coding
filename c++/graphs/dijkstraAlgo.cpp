#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int n,vector<vector<pair<int,int>>>& adj,int src) {
    // {distance, node}
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> dist(n, INT_MAX);
    dist[src] = 0;
    pq.push({0, src});
    while(pq.size()) {
        int d = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        // Ignore outdated entry
        if(d > dist[node]) continue;
        for(auto p : adj[node]) {
            int nextNode = p.first;
            int wt = p.second;
            if(d + wt < dist[nextNode]) {
                dist[nextNode] = d + wt;
                pq.push({dist[nextNode],nextNode});
            }
        }
    }
    return dist;
}