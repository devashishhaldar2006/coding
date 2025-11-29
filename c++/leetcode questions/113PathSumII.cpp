
class Solution {
public:
    void helper(TreeNode* root,vector<int> v,vector<vector<int>>& ans,int target){
        if(!root) return;
        if(!root->left && !root->right){
            if(target==root->val){
                v.push_back(root->val);
                ans.push_back(v);
            }
            return;
        }
        v.push_back(root->val);
        helper(root->left,v,ans,target-root->val);
        helper(root->right,v,ans,target-root->val);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> v;
        helper(root,v,ans,targetSum);
        return ans;
    }
};