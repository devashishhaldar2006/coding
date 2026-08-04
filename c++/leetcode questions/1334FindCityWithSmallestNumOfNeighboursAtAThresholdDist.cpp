class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int threshold) {
        vector<vector<int>> dist(n,vector<int> (n,INT_MAX));
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int wt=edges[i][2];
            dist[u][v]=wt;
            dist[v][u]=wt;
        }
        // floyd warshall algo
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                if(i==k) continue;
                for(int j=0;j<n;j++){
                    if(j==k) continue;
                    if(dist[i][k]!=INT_MAX and dist[k][j]!=INT_MAX){
                        dist[i][j]=min(dist[i][j],dist[i][k] + dist[k][j]);
                    }
                }
            }
        }
        int minCity=-1;
        int minCount=INT_MAX;    
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(i==j) continue;
                if(dist[i][j]<=threshold) count++;
            }
            if(count<=minCount){
                minCount=count;
                minCity=i;
            }
        }
        return minCity;
    }
};