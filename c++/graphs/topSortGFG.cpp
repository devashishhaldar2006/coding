class Solution {
  public:
    void dfs(int i,vector<vector<int>>& adj,vector<int>& visit,vector<int>& ans){
        visit[i]=1;
        for(int j=0;j<adj[i].size();j++){
            if(visit[adj[i][j]]==0){
                dfs(adj[i][j],adj,visit,ans);
            }
        }
        ans.push_back(i);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        int n=edges.size();
        vector<vector<int>> adj(V);
        for(int i=0;i<n;i++){
            int a=edges[i][0];
            int b=edges[i][1];
            adj[a].push_back(b);
        }
        vector<int> visit(V,0);
        vector<int> ans;
        for(int i=0;i<V;i++){
            if(visit[i]==0){
                dfs(i,adj,visit,ans);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};