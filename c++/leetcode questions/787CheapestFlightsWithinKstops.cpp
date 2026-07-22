class Solution {
public:
    typedef pair<int,pair<int,int>> pr;
    int findCheapestPrice(int n, vector<vector<int>>& edges, int src, int dst, int k) {
        vector<vector<pair<int,int>>> adj(n);
        for(int i=0;i<edges.size();i++){
            int from=edges[i][0];
            int to=edges[i][1];
            int price=edges[i][2];
            adj[from].push_back({to,price});
        }
        queue<pr> q;//{stop{node,cost}}
        vector<int> ans(n,INT_MAX);
        q.push({0,{src,0}});
        while(q.size()){
            int node=q.front().second.first;
            int stop=q.front().first;
            int cost=q.front().second.second;
            q.pop();
            if(stop==k+1) continue;
            for(auto p:adj[node]){
                int totalCost=cost+p.second;
                if(totalCost<ans[p.first]){
                    ans[p.first]=totalCost;
                    q.push({stop+1,{p.first,totalCost}});
                }
            }

        }
        if(ans[dst]==INT_MAX) return -1;
        else return ans[dst];
    }
};