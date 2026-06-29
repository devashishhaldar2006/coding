class Solution {
public:
    int mod=1000000007;
    int helper(int n,int k,int t,vector<vector<int>>& dp){
        if(n==0 and t==0) return 1;
        if(n==0) return 0;
        if(dp[n][t]!=-1) return dp[n][t];
        int sum=0;
        for(int i=1;i<=k;i++){
            if(t-i<0) continue;
            sum=(sum%mod + helper(n-1,k,t-i,dp)%mod)%mod;
        }
        return dp[n][t]=sum%mod;

    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n+1,vector<int> (target+1,-1));
        return helper(n,k,target,dp);
    }
};