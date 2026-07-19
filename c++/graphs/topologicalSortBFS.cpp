#include<bits/stdc++.h>
using namespace std;
// topological sort using bfs
vector<int> topoSort(vector<vector<int>>& graph){
    int n=graph.size();
    vector<int> indegree(n,0);
    for(int i=0;i<n;i++)
        for(int v:graph[i])
            indegree[v]++;
    queue<int> q;
    for(int i=0;i<n;i++)
        if(indegree[i]==0)
            q.push(i);
    vector<int> ans;
    while(q.size()){
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(int child:graph[node]){
            indegree[child]--;

            if(indegree[child]==0)
                q.push(child);
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> graph = {{1, 2}, {2}, {3}, {}};
    vector<int> ans = topoSort(graph);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}