class Solution {
public:
    const int NEG = -1000000000;
    int profit(int i, vector<int>& arr, int sum, vector<vector<int>>& dp) {
        if (i == arr.size()) {
            if (sum == 0) return 0;
            return NEG;
        }
        if (dp[i][sum] != -1) return dp[i][sum];
        int skip = profit(i + 1, arr, sum, dp);
        int take = NEG;
        if (sum >= arr[i]) {
            take = 1 + profit(i + 1, arr, sum - arr[i], dp);
        }
        return dp[i][sum] = max(skip, take);
    }
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(target + 1, -1));
        int ans = profit(0, nums, target, dp);
        return (ans < 0) ? -1 : ans;
    }
};