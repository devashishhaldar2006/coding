class Solution {
public:
    int maxDia=0;
    int levels(TreeNode* root){
        if(!root) return 0;
        int leftLevel=levels(root->left);
        int rightLevel=levels(root->right);
        return 1+max(leftLevel,rightLevel);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        // hint ->levels of left subtree + levels of right subtree
        if(!root) return 0;
        int dia=levels(root->left)+levels(root->right);
        maxDia=max(maxDia,dia);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return maxDia;
    }
};



//interviw method


class Solution {
public:
    int levels(TreeNode* root){
        if(!root) return 0;
        int leftLevel=levels(root->left);
        int rightLevel=levels(root->right);
        return 1+max(leftLevel,rightLevel);
    }
    void helper(TreeNode* root,int &maxDia){
        if(!root) return;
        int dia=levels(root->left)+levels(root->right);
        maxDia=max(maxDia,dia);
        helper(root->left,maxDia);
        helper(root->right,maxDia);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        // hint ->levels of left subtree + levels of right subtree
        int maxDia=0;
        helper(root,maxDia);
        return maxDia;
    }
};