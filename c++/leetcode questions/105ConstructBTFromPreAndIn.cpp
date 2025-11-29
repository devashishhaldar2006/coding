class Solution {
public:
    TreeNode* build(vector<int>& preorder,int prelo,int prehi, vector<int>& inorder,int inlo,int inhi) {
        if(prelo>prehi) return NULL;
        TreeNode* root=new TreeNode(preorder[prelo]);
        if(prelo==prehi) return root;
        int i=inlo;
        while(i<=inhi){
            if(inorder[i]==preorder[prelo]) break;
            i++;
        }
        int leftCount=i-inlo;
        int rightCount=inhi-i;
        root->left=build(preorder,prelo+1,prelo+leftCount,inorder,inlo,i-1);
        root->right=build(preorder,prelo+leftCount+1,prehi,inorder,i+1,inhi);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        return build(preorder,0,n-1,inorder,0,n-1);
    }
};