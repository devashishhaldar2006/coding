class Solution {
public:
    int helper(int i,int j,vector<int> &arr,vector<vector<int>> &dp){
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans = INT_MAX;
        for(int k=i;k<=j;k++){
            int len=arr[j+1]-arr[i-1];
            int cost=helper(i,k-1,arr,dp) + helper(k+1,j,arr,dp) + len;
            ans=min(ans,cost);
        }
        return dp[i][j] = ans;
    }
    int minCost(int a, vector<int>& cuts) {
        int n=cuts.size();
        cuts.push_back(0);
        sort(cuts.begin(),cuts.end());
        cuts.push_back(a);
        vector<vector<int>> dp(n+2,vector<int> (n+2,-1));
        return helper(1,n,cuts,dp);
    }
};