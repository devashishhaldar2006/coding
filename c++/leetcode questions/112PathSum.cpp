
class Solution {
public:
    bool helper(TreeNode* root,int target){
        if(!root) return false;
        if(!root->left && !root->right){
            return target==root->val;
        }
        return helper(root->left,target-root->val) || helper(root->right,target-root->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root,targetSum);
    }
};