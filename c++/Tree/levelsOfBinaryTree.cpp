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
int levels(Node* root){
    if(!root) return 0;
    int leftLevel=levels(root->left);
    int rightLevel=levels(root->right);
    return 1+max(leftLevel,rightLevel);
}

int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    Node* h=new Node(8);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    f->left=h;
    display(a);
    cout<<endl;
    cout<<"Levels: "<<levels(a);
    cout<<endl;
    cout<<"Height: "<<levels(a)-1;
}