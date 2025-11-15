class Solution {
public:
    int height(TreeNode* root) {
        if (!root) return 0;
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
    }
    bool helper(TreeNode* root) {
        if (!root) return true;
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        if (abs(leftHeight - rightHeight) > 1) return false;
        return helper(root->left) && helper(root->right);
    }
    bool isBalanced(TreeNode* root) {
        return helper(root);
    }
};
