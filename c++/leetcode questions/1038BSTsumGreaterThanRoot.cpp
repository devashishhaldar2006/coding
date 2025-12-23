class Solution {
public:
    void inorder(TreeNode* root,int &sum){ 
        if(!root) return ;
        inorder(root->right,sum);
        root->val+=sum;
        sum=root->val;
        inorder(root->left,sum);
      
    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum=0;
        inorder(root,sum);
        return root;
    }
};