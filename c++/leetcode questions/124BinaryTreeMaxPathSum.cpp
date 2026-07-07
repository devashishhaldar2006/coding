class Solution {
public:
    int maxSum=INT_MIN;
    int helper(TreeNode* root){
        if(!root) return 0;
        int leftLineSum=helper(root->left);
        int rightLineSum=helper(root->right);
        leftLineSum = max(0, leftLineSum);
        rightLineSum = max(0, rightLineSum);
        int pathSum = root->val + leftLineSum + rightLineSum;
        maxSum=max(maxSum,pathSum);
        return root->val + max({leftLineSum,rightLineSum});
    }
    int maxPathSum(TreeNode* root) {
        if(!root) return 0;
        int sum=helper(root);
        return maxSum;
    }
};