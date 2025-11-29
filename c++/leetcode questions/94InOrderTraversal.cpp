
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        TreeNode* node=root;
        vector<int> ans;
        while(st.size() || node){
            if(node){
                st.push(node);
                node=node->left;
            }
            else{
                TreeNode* temp=st.top();
                st.pop();
                ans.push_back(temp->val);
                node=temp->right;
            }
        }
        return ans;
    }
};