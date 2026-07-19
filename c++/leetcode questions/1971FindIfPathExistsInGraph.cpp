class Solution {
public:
    void dfs(int i,vector<int>& isVisit,vector<vector<int>>& adj){
        isVisit[i]=1;
        for(auto ele:adj[i]){
            if(isVisit[ele]==0){
                dfs(ele,isVisit,adj);
            }
        }
        
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination) return true;
        vector<vector<int>> adj(n);
        for(int i=0;i<edges.size();i++) {
            int a=edges[i][0];
            int b=edges[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        vector<int> isVisit(n,0);
        dfs(source,isVisit,adj);
        return isVisit[destination];
    }
};