#include<bits/stdc++.h>
using namespace std;
// topological sort using dfs
vector<int> ans;
void dfs(int i,vector<int>& isVisit,vector<vector<int>>& graph){
    isVisit[i]=1;
    for(auto ele: graph[i]){
        if(!isVisit[ele]){
            dfs(ele, isVisit, graph);
        }
    }
    ans.push_back(i);
    
}
void topologicalSort(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<int> isVisit(n, 0);
    for (int i = 0; i < n; i++) {
        if (!isVisit[i]) {
            dfs(i, isVisit, graph);
        }
    }
}
int main(){
    vector<vector<int>> graph = {{1, 2}, {2}, {3}, {}};
    topologicalSort(graph);
    reverse(ans.begin(), ans.end());// ans need to reverse the ans vector to get the correct topological order
    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i] << " ";
    }
    return 0;
}