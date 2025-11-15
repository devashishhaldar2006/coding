#include<iostream>
#include<algorithm>
#include<climits>
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
void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int mx(Node* root){
    if(!root) return INT_MIN;
    int lMax=mx(root->left);
    int rMax=mx(root->right);
    return max(root->val,max(lMax,rMax));
}
int mn(Node* root){
    if(!root) return INT_MAX;
    int lMin=mn(root->left);
    int rMin=mn(root->right);
    return min(root->val,min(lMin,rMin));
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
    display(a);
    cout<<endl;
    cout<<mx(a);
    cout<<endl;
    cout<<mn(a);
}