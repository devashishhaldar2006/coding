class Solution {
public:
    vector<int> parent,size;
    int leader(int u){
        if(parent[u]==u) return u;
        return parent[u]=leader(parent[u]);
    }
    void unionEdges(int u,int v){
        int a=leader(u);
        int b=leader(v);
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
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        parent.resize(n+1,0);
        size.resize(n+1,0);
        for(int i=1;i<=n;i++){
            parent[i]=i;
            size[i]=1;
        }
        vector<int> ans(2,0);
        for(int i=0;i<n;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            if(leader(u)==leader(v)){
                ans[0]=u;
                ans[1]=v;
                break;
            }
            else unionEdges(u,v);
        }
        return ans;
    }
};