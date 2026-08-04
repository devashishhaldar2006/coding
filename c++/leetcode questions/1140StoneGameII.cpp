class Solution {
public:
    int helper(vector<int>& piles,int curr,int M,vector<vector<int>>& dp) {
        int n=piles.size();
        if(curr>=n) return 0;
        if(dp[curr][M]!=-1) return dp[curr][M];
        int remaining=0;
        for(int i=curr;i<n;i++) remaining+=piles[i];
        int take=0;
        int ans=0;
        for(int x=1;x<=2*M && curr+x<=n;x++) {
            take+=piles[curr+x-1];
            ans=max(ans,remaining-helper(piles,curr+x,max(M, x),dp));
        }
        return dp[curr][M]=ans;
    }
    int stoneGameII(vector<int>& piles) {
        int n=piles.size();
        vector<vector<int>> dp(n+1,vector<int> (10005,-1));
        return helper(piles,0,1,dp);
    }
};