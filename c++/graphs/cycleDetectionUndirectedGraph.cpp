#include<bits/stdc++.h>
using namespace std;

bool flag;
void bfs(int i, vector<int>& isVisit, vector<vector<int>>& graph){
    queue<pair<int,int>> q;
    q.push({i,-1});
    isVisit[i]=1;
    while(q.size()){
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(auto ele:graph[node]){
            if(!isVisit[ele]){
                isVisit[ele]=1;
                q.push({ele,node});
            }
            else if(ele!=parent){
                flag=true;
                return;
            }

        }
    }

}

int main(){
    flag=false;
    vector<vector<int>> graph = {{1, 2}, {0, 2}, {0, 1, 3}, {2}};
    int n = graph.size();
    vector<int> isVisit(n, 0);
    for (int i = 0; i < n; i++) {
        if (!isVisit[i]) {
            bfs(i, isVisit, graph);
        }
    }
    if(flag)
        cout<<"Cycle is present in the graph";
    else
        cout<<"Cycle is not present in the graph";
}