#include<iostream>
#include<queue>
#include<climits>
// BFS-> QUEUE DFS->STACK
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* construct(int arr[],int n){//BFS
    queue < Node* > q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size() && i<n){
        Node* temp=q.front();
        q.pop();
        Node* left;
        Node* right;
        temp->left=left;
        temp->right=right;
        if(arr[i]!=INT_MIN){
            left=new Node(arr[i]);
        }
        else left=NULL;
        if(j!=n && arr[j]!=INT_MIN){
            right=new Node(arr[j]);
        }
        else right=NULL;
        if(left!=NULL) q.push(left);
        if(right!=NULL) q.push(right);
        temp->left=left;
        temp->right=right;
        i+=2;
        j+=2;
    }
    return root;
};
int levels(Node* root){
    if(!root) return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void nthLevel(Node* root,int curr,int level,vector<int>& ans){
    if(!root) return;
    if(curr==level){
        ans[curr]=root->val;
        return;
    }
    nthLevel(root->left,curr+1,level,ans);
    nthLevel(root->right,curr+1,level,ans);
    
}
void levelOrder(Node* root,vector<int>& ans){
    int n=ans.size();
    for(int i=0;i<n;i++){
        nthLevel(root,0,i,ans);
    }
}
vector<int> rightSideView(Node* root) {
    vector<int> ans(levels(root),0);
    levelOrder(root,ans);
    return ans;
}
int main(){
    int a[]={1,2,INT_MIN,4,INT_MIN,6,7,8,INT_MIN,10};
    int n=sizeof(a)/sizeof(int);
    Node* root=construct(a,n);
    vector<int> ans=rightSideView(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}