class Solution {
public:
    int helper(vector<int>& piles,int i,int j,vector<vector<int>>& dp){
        if(i==j) return piles[i];
        if(dp[i][j]!=-1) return dp[i][j];
        int pickLeft=piles[i]-helper(piles,i+1,j,dp);
        int pickRight=piles[j]-helper(piles,i,j-1,dp);
        return dp[i][j]=max(pickLeft,pickRight);
    }
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
        return helper(piles,0,n-1,dp)>0;
    }
};