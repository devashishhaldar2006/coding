class Solution {
public:
    bool helper(vector<int>& arr, int sum, int i, vector<vector<int>>& dp) {
        if(sum == 0) return true;
        if(i == arr.size() || sum < 0) return false;
        if(dp[i][sum] != -1) return dp[i][sum];
        bool skip = helper(arr, sum, i + 1, dp);
        bool take = helper(arr, sum - arr[i], i + 1, dp);
        return dp[i][sum] = skip || take;
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(auto num:nums) sum+=num;
        if(sum%2!=0) return false;
        vector<vector<int>> dp(n+1,vector<int> (sum+1,-1));
        return helper(nums,sum/2,0,dp);
    }
};