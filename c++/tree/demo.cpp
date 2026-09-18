#include<iostream>
#include<queue>
#include<climits>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=this->right=NULL;
    }
};
TreeNode* construct(int arr[],int n){
    if(n==0 || arr[0]==INT_MIN) return NULL;
    queue<TreeNode*> q;
    TreeNode* root=new TreeNode(arr[0]);
    q.push(root);
    int i=1;
    while(i<n and q.size()){
        TreeNode* temp=q.front();
        q.pop();
        if(i<n and arr[i]!=INT_MIN){
            temp->left=new TreeNode(arr[i]);
            q.push(temp->left);
        }
        i++;
        if(i<n and arr[i]!=INT_MIN){
            temp->right=new TreeNode(arr[i]);
            q.push(temp->right);
        }
        i++;
    }
    return root;
}
int levels(TreeNode* root){
    if(!root) return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void nthLevel(TreeNode* root,int curr,int level){
    if(!root) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    nthLevel(root->left,curr+1,level);
    nthLevel(root->right,curr+1,level);
}
void levelOrderTraversal(TreeNode* root){
    if(!root) return;
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nthLevel(root,1,i);
        cout<<endl;
    }
}
void levelOrderQueue(TreeNode* root){
    if(!root) return;
    queue<TreeNode*> q;
    q.push(root);
    while(q.size()){
        TreeNode* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    return;
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    TreeNode* root=construct(arr,n);
    levelOrderTraversal(root);
    cout<<endl;
    levelOrderQueue(root);
    // expected output:
    // 1
    // 2 3
    // 4 5 6 7

}  