class Solution {
public:
    typedef pair<int,pair<int,int>> pr;
    int minimumEffortPath(vector<vector<int>>& heights) {
        int m=heights.size();
        int n=heights[0].size();
        vector<vector<int>> ans(m,vector<int> (n,INT_MAX));
        ans[0][0]=0;
        priority_queue<pr,vector<pr>,greater<pr>> pq;
        pq.push({0,{0,0}});
        int r[]={-1,0,1,0};
        int c[]={0,-1,0,1};
        while(pq.size()){
            int effort=pq.top().first;
            int row=pq.top().second.first;
            int col=pq.top().second.second;
            pq.pop();
            for(int i=0;i<=3;i++){
                int newRow=row+r[i];
                int newCol=col+c[i];
                if(newRow<0 || newCol<0 || newRow>m-1 || newCol>n-1) continue;
                int e=abs(heights[row][col]-heights[newRow][newCol]);
                e=max(e,effort);
                if(e<ans[newRow][newCol]){
                    ans[newRow][newCol]=e;
                    pq.push({e,{newRow,newCol}});
                }
            }
        }
        return ans[m-1][n-1];
    }
};