
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack< TreeNode* > st;
        if(root) st.push(root);
        vector<int> ans;
        while(st.size()){
            TreeNode* temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->right) st.push(temp->right);
            if(temp->left) st.push(temp->left);
        }
        return ans;
    }
};