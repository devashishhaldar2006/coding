
class Solution {
public:
    int levels(TreeNode* root){
        if(!root) return 0;
        int leftLevel=levels(root->left);
        int rightLevel=levels(root->right);
        return 1+max(leftLevel,rightLevel);
    }
    void nthlevel(TreeNode* root,int curr,int level,vector<int>& ans){
        if(!root) return ;
        if(curr==level) {
            ans.push_back(root->val);
            return;
        }
        nthlevel(root->left,curr+1,level,ans);
        nthlevel(root->right,curr+1,level,ans);
    }
    void levelOrderTraversal(TreeNode* root,vector<vector<int>>& res){
        int n=levels(root);
        for(int i=1;i<=n;i++){
            vector<int> ans;
            nthlevel(root,1,i,ans);
            res.push_back(ans);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        levelOrderTraversal(root,res);
        return res;

    }
};






class Solution {
public:
    int levels(TreeNode* root){
        if(!root) return 0;
        int leftLevel=levels(root->left);
        int rightLevel=levels(root->right);
        return 1+max(leftLevel,rightLevel);
    }
    void levelOrderTraversal(TreeNode* root,vector<vector<int>>& res,int level){
        if(!root) return;
        res[level].push_back(root->val);
        levelOrderTraversal(root->left,res,level+1);
        levelOrderTraversal(root->right,res,level+1);
    } 
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n=levels(root);
        vector<vector<int>> res;
        for(int i=1;i<=n;i++){
            vector<int> v;
            res.push_back(v);
        }
        levelOrderTraversal(root,res,0);
        return res;

    }
};