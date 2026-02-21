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


Node* construct(int arr[], int n){
    if(n == 0 || arr[0] == INT_MIN) return NULL;

    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);

    int i = 1;

    while(!q.empty() && i < n){
        Node* temp = q.front();
        q.pop();

        // Left child
        if(i < n && arr[i] != INT_MIN){
            temp->left = new Node(arr[i]);
            q.push(temp->left);
        }
        i++;

        // Right child
        if(i < n && arr[i] != INT_MIN){
            temp->right = new Node(arr[i]);
            q.push(temp->right);
        }
        i++;
    }

    return root;
}


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
