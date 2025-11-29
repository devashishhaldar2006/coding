
class Solution {
public:
    int levels(TreeNode* root){
        if(!root) return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    void nthLevel(TreeNode* root,int curr,int level,vector<int>& ans){
        if(!root) return;
        if(curr==level){
            ans[curr]=root->val;
            return;
        }
        nthLevel(root->left,curr+1,level,ans);
        nthLevel(root->right,curr+1,level,ans);
        
    }
    void levelOrder(TreeNode* root,vector<int>& ans){
        int n=ans.size();
        for(int i=0;i<n;i++){
            nthLevel(root,0,i,ans);
        }
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans(levels(root),0);
        levelOrder(root,ans);
        return ans;
    }
};






class Solution {
public:
    int levels(TreeNode* root){
        if(!root) return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    void preorder(TreeNode* root,vector<int>& ans,int level){
        if(!root) return;
        ans[level]=root->val;
        preorder(root->left,ans,level+1);
        preorder(root->right,ans,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans(levels(root),0);
        preorder(root,ans,0);
        return ans;
    }
};