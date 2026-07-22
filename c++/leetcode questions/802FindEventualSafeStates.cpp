class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>> adj(n);
        vector<int> indegree(n);
        for(int i=0;i<n;i++){
            for(auto ele:graph[i]){
                // push reverse graph
                adj[ele].push_back(i);
                indegree[i]++;
            }
        }
        vector<int> ans;
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(q.size()){
            int front=q.front();
            q.pop();
            ans.push_back(front);
            for(auto ele:adj[front]){
                indegree[ele]--;
                if(indegree[ele]==0) q.push(ele);
                
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};