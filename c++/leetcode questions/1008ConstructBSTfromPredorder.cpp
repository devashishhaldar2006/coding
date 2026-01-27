class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp=new TreeNode(val);
        if(!root) return temp;
        if(root->val<val){ // go right
            if(!root->right){
                root->right=temp;
            }
            else insertIntoBST(root->right,val);
        }
        else if(root->val>val){ // go left
            if(!root->left){
                root->left=temp;
            }
            else insertIntoBST(root->left,val);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& pre) {
       TreeNode* root=new TreeNode(pre[0]);
       for(int i=1;i<pre.size();i++){
            insertIntoBST(root,pre[i]);
       } 
       return root;
    }
};