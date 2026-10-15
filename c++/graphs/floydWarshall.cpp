#include <bits/stdc++.h>
using namespace std;

void floydWarshall(vector<vector<int>>& dist) {
    int n = dist.size();
    // k = intermediate vertex
    for(int k = 0; k < n; k++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(dist[i][k] != INT_MAX && dist[k][j] != INT_MAX) {
                    dist[i][j] = min(dist[i][j],dist[i][k] + dist[k][j]);
                }
            }
        }
    }
    // Negative cycle detection
    for(int i = 0; i < n; i++) {
        if(dist[i][i] < 0) {
            cout << "Negative cycle exists\n";
            return;
        }
    }
}