class Solution {
public:
    int maxDia=INT_MIN;
    int helper(TreeNode* root){
        if(!root) return 0;;
        int leftLevels=helper(root->left);
        int rightLevels=helper(root->right);
        int dia=leftLevels+rightLevels;
        maxDia=max(maxDia,dia);
        return 1 + max(leftLevels,rightLevels);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int level=helper(root);
        return maxDia;

    }
};