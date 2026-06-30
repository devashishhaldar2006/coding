class Solution {
public:
    int levels(TreeNode* root){
        if(!root) return 0;
        int leftLevel=levels(root->left);
        int rightLevel=levels(root->right);
        return 1+max(leftLevel,rightLevel);
    }
    int maxDepth(TreeNode* root) {
        return levels(root);
    }
};