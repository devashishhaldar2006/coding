#include<iostream>
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
int levels(Node* root){
    if(!root) return 0;
    int leftLevel=levels(root->left);
    int rightLevel=levels(root->right);
    return 1+max(leftLevel,rightLevel);
}
void nthlevel(Node* root,int curr,int level){
    if(!root) return ;
    if(curr==level) {
        cout<<root->val<<" ";
        return;//optimised return statement
    }
    nthlevel(root->left,curr+1,level);
    nthlevel(root->right,curr+1,level);
}
//level order traversal

void levelOrderTraversal(Node* root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nthlevel(root,1,i);
        // nthlevelReverse(root,1,i);
        cout<<endl;
    }
}
void nthlevelReverse(Node* root,int curr,int level){
    if(!root) return ;
    if(curr==level) {
        cout<<root->val<<" ";
        return;//optimised return statement
    }
    nthlevelReverse(root->right,curr+1,level);
    nthlevelReverse(root->left,curr+1,level);
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    levelOrderTraversal(a);

    

}