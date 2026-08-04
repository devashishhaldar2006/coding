#include<iostream>
#include<queue>
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

void levelOrderQueue(Node* root){//BFS
    queue < Node* > q;
    q.push(root);
    while(q.size()){
        Node* temp=q.front();
        q.pop();//pop
        cout<<temp->val<<" ";//ans
        if(temp->left) q.push(temp->left);//push
        if(temp->right) q.push(temp->right);
    }
    cout<<endl;
};
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
    levelOrderQueue(a);
}