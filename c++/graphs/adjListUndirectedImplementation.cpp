#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<vector<int>>& adj,int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<vector<int>>& adj){
    for(int i=0;i<adj.size();i++){
        cout<<i<<"->";
        for(auto ele:adj[i]){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>> adj(4);
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);
    printGraph(adj);
}