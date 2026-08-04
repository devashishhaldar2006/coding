class Solution {
public:
    typedef pair<int,pair<int,int>> pr;
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        priority_queue<pr,vector<pr>,greater<pr> > pq;
        int sum=0;
        vector<int> vis(n,0);
        pq.push({0,{0,-1}});  //{dist,{node,parent}}
        while(pq.size()){
            int dist=pq.top().first;
            int node=pq.top().second.first;
            int parent=pq.top().second.second;
            pq.pop();
            if(vis[node]==1) continue;
            sum+=dist;
            vis[node]=1;
            for(int i=0;i<n;i++){
                if(i==node || i==parent) continue;
                if(vis[i]==1) continue;
                int x1=points[node][0];
                int y1=points[node][1];
                int x2=points[i][0];
                int y2=points[i][1];
                int minDist=abs(x2-x1) + abs(y2-y1);
                pq.push({minDist,{i,node}});
            }
            
        }
        return sum;
    }
};