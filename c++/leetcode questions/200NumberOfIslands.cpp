class Solution {
public:
    void bfs(int i,int j,vector<vector<char>>& grid,vector<vector<int>>& isVisit){
        int m=grid.size();
        int n=grid[0].size();
        isVisit[i][j]=1;
        queue<pair<int,int>> q;
        q.push({i,j});
        while(q.size()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            if(row>0){
                if(grid[row-1][col]=='1' and isVisit[row-1][col]==0){
                    isVisit[row-1][col]=1;
                    q.push({row-1,col});
                }
            }
            if(row+1<m){
                if(grid[row+1][col]=='1' and isVisit[row+1][col]==0){
                    isVisit[row+1][col]=1;
                    q.push({row+1,col});
                }
            }
            if(col>0){
                if(grid[row][col-1]=='1' and isVisit[row][col-1]==0){
                    isVisit[row][col-1]=1;
                    q.push({row,col-1});
                }
            }
            if(col+1<n){
                if(grid[row][col+1]=='1' and isVisit[row][col+1]==0){
                    isVisit[row][col+1]=1;
                    q.push({row,col+1});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int cnt=0;
        vector<vector<int>> isVisit(m,vector<int> (n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1' and isVisit[i][j]==0){
                    bfs(i,j,grid,isVisit);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};