bool canJump(vector<int>& nums) {
    int n=nums.size();
    int mx=0;
    for(int i=0;i<n;i++){
        if(i>mx) return false;
        mx=max(mx,i+nums[i]);
    }
    return true;
}


class Solution {
public:
    int helper(vector<int>& nums,int i,vector<int>& dp) {
        if(i>=nums.size()-1) return 1;
        if(dp[i]!=-1) return dp[i];
        for(int idx=i+1;idx<=i+nums[i] && idx<nums.size();idx++){
            if(helper(nums,idx,dp)) return dp[i]=1;
        }
        return dp[i]=0;
    }

    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return helper(nums,0,dp);
    }
};