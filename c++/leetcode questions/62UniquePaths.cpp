class Solution {
public:
    int helper(int row,int col,vector<vector<int>> & dp){
        if(row<0 || col<0) return 0;
        if(row==0 && col==0) return 1;
        if(dp[row][col]!=-1) return dp[row][col];
        return dp[row][col] = helper(row-1,col,dp)+ helper(row,col-1,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int> (n,-1));
        return helper(m-1,n-1,dp);
    }
};

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int> (n,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0) dp[i][j]=1;
                else dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};