class Solution {
public:
    void inorder(TreeNode* root,vector<int>& v){
        if(!root) return ;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        inorder(root,v);
        int n=v.size();
        return v[k-1];
    }
};