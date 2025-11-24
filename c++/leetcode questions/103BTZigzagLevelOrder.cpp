
class Solution {
public:
    int levels(TreeNode* root){
        if(!root) return 0;
        int leftCall=levels(root->left);
        int rightCall=levels(root->right);
        return 1+max(leftCall,rightCall);
    }
    void nthLevel(TreeNode* root,int curr,int level,int dir,vector<int>& v){
        if(!root) return;
        if(curr==level){
            v.push_back(root->val);
            return;
        }
        if(dir!=0){
            nthLevel(root->right,curr+1,level,dir,v);
            nthLevel(root->left,curr+1,level,dir,v);
        }
        else{
            nthLevel(root->left,curr+1,level,dir,v);
            nthLevel(root->right,curr+1,level,dir,v);
        }
       
    }
    void levelOrderTraversal(TreeNode* root,vector<vector<int>>& ans){
        int n=levels(root);
        for(int i=1;i<=n;i++){
            vector<int> v;
            int dir=(i % 2 == 1) ? 0 : 1; 
            nthLevel(root,1,i,dir,v);
            ans.push_back(v);
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        levelOrderTraversal(root,ans);
        return ans;
    }
};