class Solution {
public:
    TreeNode* iop(TreeNode* root){
        TreeNode* pred=root->left;
        while(pred->right){
            pred=pred->right;
        }
        return pred;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        if(root->val==key){
            if(!root->left && !root->right){
                //leaf node 
                return NULL;
            }
            //1 child
            if(!root->left || !root->right){
                if(!root->left) return root->right;
                else return root->left;
            }
            // 2 child
            if(root->left && root->right){
                TreeNode* pred=iop(root);
                root->val=pred->val;
                root->left=deleteNode(root->left,pred->val);
            }
        }
        else if(root->val > key){
            root->left=deleteNode(root->left,key);
        }
        else {
            root->right=deleteNode(root->right,key);
        }
        return root;
    }
};