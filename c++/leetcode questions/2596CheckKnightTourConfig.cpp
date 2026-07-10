class Solution {
public:
    bool helper(vector<vector<int>>& grid,int row,int col,int num){
        int n=grid.size();
        if(grid[row][col]==n*n-1) return true;
        // 2 up 1 right
        int i=row-2,j=col+1;
        if(i>=0 and j<n and grid[i][j]==num+1) return helper(grid,i,j,num+1);
        // 2 up 1 left
        i=row-2,j=col-1;
        if(i>=0 and j>=0 and grid[i][j]==num+1) return helper(grid,i,j,num+1);
        // 2 down 1 right
        i=row+2,j=col+1;
        if(i<n and j<n and grid[i][j]==num+1) return helper(grid,i,j,num+1);
        // 2 down 1 left
        i=row+2,j=col-1;
        if(i<n and j>=0 and grid[i][j]==num+1) return helper(grid,i,j,num+1);
         // 2 left 1 up
        i=row-1,j=col-2;
        if(i>=0 and j>=0 and grid[i][j]==num+1) return helper(grid,i,j,num+1);
         // 2 right 1 up
        i=row-1,j=col+2;
        if(i>=0 and j<n and grid[i][j]==num+1) return helper(grid,i,j,num+1);
         // 2 left 1 down
        i=row+1,j=col-2;
        if(i<n and j>=0 and grid[i][j]==num+1) return helper(grid,i,j,num+1);
         // 2 right 1 down
        i=row+1,j=col+2;
        if(i<n and j<n and grid[i][j]==num+1) return helper(grid,i,j,num+1);
        return false;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        if(grid[0][0]!=0) return false;
        return helper(grid,0,0,0);
    }
};