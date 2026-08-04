#include<iostream>
using namespace std;

//full binary tree-> either 0 or 2 childs
// perfect binary tree-> every node except the last level leaf nodes has 2 child nodes
// complete binary tree-> incomplete hota hai jo 2 child n ho kisi ek ka sort of gap ajaye beech me
// balanced binary tree->for evry node the differnce between the levels of left subtree and right sub tree should be atmost 1 (important)
// degenrate and skewed binary tree-> 0 Or 1 child

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
    if(!root) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
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
}