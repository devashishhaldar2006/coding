class Solution {
public:
    int sum=0;
    int helper(vector<int>& nums,int i,int curr,int target,vector<vector<int>>& dp){
        if(i==nums.size()){
            if(curr==target) return 1;
            else return 0;
        }
        if(dp[i][curr+sum]!=-1) return dp[i][curr+sum];
        int add=helper(nums,i+1,curr+nums[i],target,dp);
        int sub=helper(nums,i+1,curr-nums[i],target,dp);
        return dp[i][curr+sum]=add+sub;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        for(auto num:nums) sum+=num;
        vector<vector<int>> dp(n+1,vector<int> (2*sum+1,-1));
        return helper(nums,0,0,target,dp);
    }
};