class Solution {
public:
    void helper(vector<int>& nums,vector<int> v,vector<vector<int>>& ans,vector<bool>& isVisited){
        if(nums.size()==v.size()){
            ans.push_back(v);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(isVisited[i]==false){
                isVisited[i]=true;
                v.push_back(nums[i]);
                helper(nums,v,ans,isVisited);
                // backtracking
                isVisited[i]=false;
                v.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int> v;
        vector<bool> isVisited(n,false);
        helper(nums,v,ans,isVisited);
        return ans;
    }
};