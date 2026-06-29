class Solution {
public:
    int helper(vector<int>& nums, int i, int end, vector<int>& dp) {
        if (i > end) return 0;
        if (i == end) return nums[i];
        if (dp[i] != -1) return dp[i];
        return dp[i]=max(nums[i] + helper(nums, i + 2, end, dp),helper(nums, i + 1, end, dp));
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        vector<int> dp1(n, -1), dp2(n, -1);
        return max(helper(nums, 0, n - 2, dp1),helper(nums, 1, n - 1, dp2));
    }
};