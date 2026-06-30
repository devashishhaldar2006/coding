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
    bool isSubsetSum(vector<int>& arr, int sum) {
        vector<vector<int>> dp(arr.size(), vector<int>(sum + 1, -1));
        return helper(arr, sum, 0, dp);
    }
};