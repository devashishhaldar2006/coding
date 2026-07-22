class Solution {
public:
    typedef pair<int,int> pr;
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector< pair<int,int> >> adj(n+1);
        for(int i=0;i<times.size();i++){
            int u=times[i][0];
            int v=times[i][1];
            int time=times[i][2];
            adj[u].push_back({v,time});
        }

        vector<int> ans(n+1,INT_MAX);
        ans[k]=0;
        priority_queue<pr,vector<pr>,greater<pr> > pq;
        pq.push({0,k}); //{distance,node}-> distance wise sort
        while(pq.size()){
            int time=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            if(time>ans[node]) continue;
            for(auto p:adj[node]){
                int totalTime=time + p.second;
                if(ans[p.first]>totalTime){
                    ans[p.first]=totalTime;
                    pq.push({totalTime,p.first});
                }
            }
        }
        int mx=INT_MIN;
        for(int i=1;i<=n;i++){
            if(ans[i]==INT_MAX) return -1;
            mx=max(mx,ans[i]);
        }
        return mx;
    }
};