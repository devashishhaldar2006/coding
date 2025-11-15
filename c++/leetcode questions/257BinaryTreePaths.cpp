class Solution {
public:
    void helper(TreeNode* root,string s,vector<string>& ans){
        if(!root) return;
        string a=to_string(root->val);
        if(!root->left && !root->right) {
            s+=a;
            ans.push_back(s);
            return;
        }
        helper(root->left,s+a+"->",ans);
        helper(root->right,s+a+"->",ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(root,"",ans);
        return ans;
    }
};