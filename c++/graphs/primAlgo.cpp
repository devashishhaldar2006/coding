#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pr;
int prim(int n, vector<vector<pair<int,int>>>& adj) {
    // {weight, node}
    priority_queue<pr,vector<pr>,greater<pr>> pq;
    vector<int> vis(n, 0);
    pq.push({0, 0}); // {weight, starting node}
    int mstWeight = 0;
    while(pq.size()) {
        int wt = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        if(vis[node]) continue;
        vis[node] = 1;
        mstWeight += wt;
        for(auto p : adj[node]) {
            int nextNode = p.first;
            int edgeWeight = p.second;
            if(!vis[nextNode]) {
                pq.push({edgeWeight, nextNode});
            }
        }
    }
    return mstWeight;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int,int>>> adj(n);
    for(int i = 0; i < m; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }
    cout << prim(n, adj) << endl;
    return 0;
}