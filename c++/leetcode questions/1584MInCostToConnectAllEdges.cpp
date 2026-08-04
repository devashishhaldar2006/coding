class Solution {
public:
    vector<int> parent;
    vector<int> size;
    typedef pair<int,pair<int,int> > pr;
    int find(int a){
        if(parent[a]==a) return a;
        else return parent[a]=find(parent[a]);
    }
    void unionEdges(int a,int b){
        a=find(a);
        b=find(b);
        if(a!=b){
            if(size[a]>size[b]){
                parent[b]=a;
                size[b]+=size[a];
            }
            else{
                parent[a]=b;
                size[a]+=size[b];
            }
        }
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        parent.resize(n+1,0);
        size.resize(n+1,0);
        for(int i=0;i<n;i++){
            parent[i]=i;
            size[i]=1;
        }

        priority_queue<pr,vector<pr>,greater<pr> > pq;
        for(int u=0;u<n;u++){
            for(int v=u+1;v<n;v++){
                int x1=points[u][0];
                int y1=points[u][1];
                int x2=points[v][0];
                int y2=points[v][1];
                int dist=abs(x1-x2) + abs(y1-y2);
                pq.push({dist,{u,v}});
            }
        }
        int cost=0;
        while(pq.size()){
            int u=pq.top().second.first;
            int v=pq.top().second.second;
            int dist=pq.top().first;
            pq.pop();
            if(find(u)!=find(v)){
                cost+=dist;
                unionEdges(u,v);
            }
        }
        return cost;

    }
};