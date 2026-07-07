class Solution {
public:
    unordered_map<TreeNode*,int> m;
    int helper(TreeNode* root){
        if(!root) return 0;;
        if(m.find(root)!=m.end()) return m[root];
        int leftLevels=helper(root->left);
        int rightLevels=helper(root->right);
        int dia=leftLevels+rightLevels;
        m.insert({root, 1 + max(leftLevels,rightLevels)});
        return m[root];
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int dia=helper(root->left) + helper(root->right);
        return max({dia,diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)});

    }
};