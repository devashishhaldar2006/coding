class Solution {
public:
    bool existsInTree(TreeNode* root, TreeNode* target) {
        if (!root)
            return false;
        if (root == target)
            return true;
        return existsInTree(root->left,target) || existsInTree(root->right, target);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (existsInTree(root->left, p) && existsInTree(root->left, q)) 
            return lowestCommonAncestor(root->left, p, q);
        
        else if (existsInTree(root->right, p) && existsInTree(root->right, q)) 
            return lowestCommonAncestor(root->right, p, q);
        return root;
    }
};