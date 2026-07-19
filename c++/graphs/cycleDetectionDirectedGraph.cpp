#include<bits/stdc++.h>
using namespace std;
bool flag;
void bfs(vector<vector<int>>& graph){
    int n = graph.size();
    vector<int> indegree(n,0);
    for(int i=0;i<n;i++){
        for(auto ele:graph[i]){
            indegree[ele]++;
        }
    }
    queue<int> q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    int count=0;
    while(q.size()){
        int node=q.front();
        q.pop();
        count++;
        for(auto ele:graph[node]){
            indegree[ele]--;
            if(indegree[ele]==0){
                q.push(ele);
            }
        }
    }
    if(count!=n) flag=true;
}
int main(){
    flag=false;
    vector<vector<int>> graph = {{1, 2}, {2}, {3}, {}};
    bfs(graph);
    if(flag) cout<<"Cycle is present in the graph";
    else cout<<"Cycle is not present in the graph";
}