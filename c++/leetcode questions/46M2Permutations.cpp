class Solution {
public:
    void helper(vector<int>& nums,int idx,vector<vector<int>>& ans){
        if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[i],nums[idx]);
            helper(nums,idx+1,ans);
            // backtracking
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        helper(nums,0,ans);
        return ans;
    }
};