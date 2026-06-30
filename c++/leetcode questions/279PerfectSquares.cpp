class Solution {
public:
    bool isPerfect(int n){
        int root=(int)sqrt(n);
        return root*root==n;
    }
    int helper(int n,vector<int>& dp){
        if(isPerfect(n)) return 1;
        if(dp[n]!=-1) return dp[n];
        int minCount=INT_MAX;
        for(int i=1;i*i<=n;i++){
            int num=helper(i*i,dp) + helper(n-(i*i),dp);
            minCount=min(minCount,num);
        }
        return dp[n]=minCount;
    }
    int numSquares(int n) {
        vector<int> dp(n+1,-1);
        return helper(n,dp);
    }
};