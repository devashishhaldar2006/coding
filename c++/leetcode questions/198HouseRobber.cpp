class Solution {
public:
    int helper(vector<int>& nums,int i,vector<int>& dp){
        if(i==nums.size()-1) return nums[i];
        if(i==nums.size()-2) return max(nums[i],nums[i+1]);
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(nums[i]+helper(nums,i+2,dp),0+helper(nums,i+1,dp));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return helper(nums,0,dp);
    }
};


class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> dp(n);
        dp[n-1]=nums[n-1];
        dp[n-2]=max(nums[n-1],nums[n-2]);
        for(int i=n-3;i>=0;i--){
            dp[i]=max(nums[i]+dp[i+2],dp[i+1]);
        }
        return dp[0];
    }
};