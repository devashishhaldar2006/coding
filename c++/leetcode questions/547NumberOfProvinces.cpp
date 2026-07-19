class Solution {
public:
    void dfs(int i,vector<int>& isVisited,vector<vector<int>>& adj){
        int n=adj.size();
        isVisited[i]=1;
        for(int j=0;j<n;j++){
            if(adj[i][j]==1 and isVisited[j]==0){
                dfs(j,isVisited,adj);
            }  
        }
        
    };
    int findCircleNum(vector<vector<int>>& adj) {
        int n=adj.size();
        vector<int> isVisited(n+1,0);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(isVisited[i]==0) {
                dfs(i,isVisited,adj);
                cnt++;
            }
        }
        return cnt;
        
    }
};