class Solution {
  public:
    bool bfs(int i,int parent,vector<vector<int>>& adj,vector<int>& visit){
        visit[i]=1;
        queue<pair<int,int>> q;
        q.push({i,parent});
        while(q.size()){
            int curr=q.front().first;
            int p=q.front().second;
            q.pop();
            for(auto ele:adj[curr]){
                if(visit[ele]==1 and ele!=p) return true;
                if(visit[ele]==0){
                    visit[ele]=1;
                    q.push({ele,curr});
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        for(int i=0;i<edges.size();i++){
            int a=edges[i][0];
            int b=edges[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        vector<int> visit(V,0);
        for(int i=0;i<V;i++){
            if(visit[i]==0){
                if(bfs(i,-1,adj,visit)){
                    return true;
                }
            }
        }
        return false;
    
    }
};