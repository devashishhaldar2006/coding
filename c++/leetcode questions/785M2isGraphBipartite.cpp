class Solution {
public:
    vector<int> parent;
    vector<int> size;
    vector<bool> parity;
    int leader(int a){
        if(parent[a]==a) return a;
        int p = parent[a]; 
        parent[a]=leader(parent[a]);
        parity[a]= parity[a] ^ parity[p];
        return parent[a];
    }
    void unionEdges(int u,int v){
        int rootU=leader(u);
        int rootV=leader(v);
        if(rootU!=rootV){
            if(size[rootU]>size[rootV]){
                parent[rootV]=rootU;
                size[rootU]+=size[rootV];
                parity[rootV]= parity[u] ^ parity[v] ^ true;
            }
            else{
                parent[rootU]=rootV;
                size[rootV]+=size[rootU];
                parity[rootU]= parity[u] ^ parity[v] ^ true;
            }
        }
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        parent.resize(n,0);
        size.resize(n,0);
        parity.resize(n,false);
        for(int i=0;i<n;i++){
            parent[i]=i;
            size[i]=1;
        }
        for(int u=0;u<n;u++){
            for(int v=0;v<graph[u].size();v++){
                if(graph[u][v]>u){
                    if(leader(u)==leader(graph[u][v])){
                        if(parity[u]==parity[graph[u][v]]) return false;
                    }
                    else unionEdges(u,graph[u][v]);
                }
            }
        }
        return true;
    }
};