class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        else if(!p || !q) return false; 
        if(p->val!=q->val) return false;
        bool leftAns=isSameTree(p->left,q->left);
        if(!leftAns) return false;
        bool rightAns=isSameTree(p->right,q->right);
        if(!rightAns) return false;
        return true;
        
    }
};