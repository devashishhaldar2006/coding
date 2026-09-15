class Solution {
public:
    int helper(vector<int>& nums,int i,vector<int>& dp){
        int n=nums.size();
        if(i==n-1) return 0;
        if(dp[i]!=-1) return dp[i];
        int ans=INT_MAX;
        for(int idx=i+1;idx<=i+nums[i] && idx<n;idx++){
            int jumps=helper(nums, idx, dp);

            if(jumps!=INT_MAX)
                ans=min(ans,1+jumps);
        }
        return dp[i]=ans;
    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return helper(nums,0,dp);
    }
};