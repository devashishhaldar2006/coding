class Solution {
public:
    
    long long profit(int i,vector<int>& arr,vector<vector<int>>& dp,int sum){
        if(i==arr.size()) {
            if(sum==0) return 0;
            else return INT_MAX;
        }
        if(dp[i][sum]!=-1) return dp[i][sum];
        long long skip=profit(i+1,arr,dp,sum);
        if(sum-arr[i]<0) return dp[i][sum]=skip;
        long long take=1+(long long)profit(i,arr,dp,sum-arr[i]);
        return dp[i][sum]=(long long)min(take,skip);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int> (amount+1,-1));
        long long ans=(long long)profit(0,coins,dp,amount);
        if(ans==INT_MAX){
            return -1;
        }
        else return (int)ans;
    }
};