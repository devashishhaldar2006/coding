class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int,double> >> adj(n);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            double prob=succProb[i];
            adj[u].push_back({v,prob});
            adj[v].push_back({u,prob});//undirected graph
        } 
        vector<double> ans(n,0.0);
        ans[start]=1;
        priority_queue<pair<double,int>> pq;
        pq.push({1.0,start});
        while(pq.size()){
            double prob=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            if(ans[node]<prob) continue;
            for(auto p:adj[node]){
                double totalProb=prob*p.second;
                if(ans[p.first]<totalProb){
                    ans[p.first]=totalProb;
                    pq.push({totalProb,p.first});
                }
            }
        }
        return ans[end];
    }
};