class Solution {
public:
    TreeNode* helper(TreeNode* root,int& sum){
        if(!root) return NULL;
        helper(root->right,sum);
        sum+=root->val;
        root->val=sum;
        helper(root->left,sum);
        return root;
    }
    TreeNode* convertBST(TreeNode* root) {
        if(!root) return root;
        int sum=0;
        return helper(root,sum);
    }
};