class Solution {
public:
    bool flag;
    void bfs(int i,vector<int>& isVisit,vector<vector<int>>& graph){
        queue<int> q;
        q.push(i);
        isVisit[i]=0;// 1->red 0->blue
        while(q.size()){
            int front=q.front();
            int color=isVisit[front];
            q.pop();
            for(auto ele: graph[front]){
                if(isVisit[ele]==isVisit[front]){
                    flag=false;
                    return;
                }
                if(isVisit[ele]==-1){
                    isVisit[ele]=1-color;
                    q.push(ele);
                }
            }
        }
    }
    bool isBipartite(vector<vector<int>>& graph) {
        flag=true;
        int n=graph.size();
        vector<int> isVisit(n,-1);
        for(int i=0;i<n;i++){
            if(isVisit[i]==-1) bfs(i,isVisit,graph);
        }
        return flag;
    }
};