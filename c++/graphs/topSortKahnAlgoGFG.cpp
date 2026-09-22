class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        int n=edges.size();
        vector<vector<int>> adj(V);
        vector<int> indegree(V,0);
        for(int i=0;i<n;i++){
            int a=edges[i][0];
            int b=edges[i][1];
            adj[a].push_back(b);
            indegree[b]++;
        }
        vector<int> visit(V,0);
        vector<int> ans;
        queue<int> q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0) q.push(i);
        }
        while(q.size()){
            int front=q.front();
            q.pop();
            ans.push_back(front);
            for(auto ele:adj[front]){
                indegree[ele]--;
                if(indegree[ele]==0){
                    q.push(ele);
                    visit[ele]=1;
                }
            }
        }
        return ans;
        
    }
};