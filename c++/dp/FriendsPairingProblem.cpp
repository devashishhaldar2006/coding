class Solution {
  public:
    int helper(int n,vector<int>& dp){
        if(n<=2) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=helper(n-1,dp)+(n-1)*helper(n-2,dp);
    }
    int helper(int n,vector<int>& dp){
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=(dp[i-1]+(i-1)*dp[i-2]);
        }
        return dp[n];
    }
    int countFriendsPairings(int n) {
        // code here
        vector<int> dp(n+1,-1);
        return helper(n,dp);
    }
};
