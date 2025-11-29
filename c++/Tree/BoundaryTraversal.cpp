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
        if(arr[i]!=INT_MIN){
            left=new Node(arr[i]);
        }
        else left=NULL;

        if(j<n && arr[j]!=INT_MIN){
            right=new Node(arr[j]);
        }
        else right=NULL;
        temp->left=left;
        temp->right=right;
        if(left!=NULL) q.push(left);
        if(right!=NULL) q.push(right);

        i+=2;
        j+=2;
    }
    return root;
};

void boundaryLeft(Node* root){
    if(!root) return ;
    if(!root->left && !root->right) return ;
    cout<<root->val<<" ";
    if(root->left) boundaryLeft(root->left);
    else boundaryLeft(root->right);
}

void boundaryLeaf(Node* root){
    if(!root) return ;
    if(!root->left && !root->right){
        cout<<root->val<<" ";
        return ;
    }
    boundaryLeaf(root->left);
    boundaryLeaf(root->right);
}

void boundaryRight(Node* root){
    if(!root) return ;
    if(!root->left && !root->right) return ;
    if(root->right) boundaryRight(root->right);
    else boundaryRight(root->left);
    cout<<root->val<<" ";
}


void boundaryTraversal(Node* root){
    if(!root) return;
    cout<<root->val<<" ";
    boundaryLeft(root->left);
    boundaryLeaf(root);
    boundaryRight(root->right);
}

int main(){
    int a[]={1,2,INT_MIN,4,INT_MIN,6,7,8,INT_MIN,10};
    int n=sizeof(a)/sizeof(int);
    Node* root=construct(a,n);
    boundaryTraversal(root);
}
