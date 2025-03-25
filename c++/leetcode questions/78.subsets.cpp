/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    //hum and tab lagyenge vector mein jb new vector nhi bnna ho
    void helper(vector<int>& nums,vector<int> ans,vector<vector<int>>& finalAns,int idx){
        if(idx==nums.size()){
            finalAns.push_back(ans);
            return;
        }
        helper(nums,ans,finalAns,idx+1);
        ans.push_back(nums[idx]);
        helper(nums,ans,finalAns,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> finalAns;
        helper(nums,ans,finalAns,0);
        return finalAns;
    }
};
// @lc code=end

