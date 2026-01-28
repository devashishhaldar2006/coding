class Solution {
public:
    void flatten(TreeNode* root) {
        // kind of morris traversal
        if(!root) return;
        TreeNode* curr=root;
        while(curr){
            if(curr->left){
                // save the right
                TreeNode* r=curr->right;
                curr->right=curr->left;
                // finding pred
                TreeNode* pred=curr->left;
                while(pred->right) pred=pred->right;
                // link
                pred->right=r;
                curr=curr->right;
            }
            else curr=curr->right;
        }
        TreeNode* temp=root;
        while(temp->right){
            temp->left=NULL;
            temp=temp->right;
        }
    }
};