#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = nullptr;
        right = nullptr;
    }
};
int sizeOfTree(Node* root){
    if(!root) return 0;
    return 1+sizeOfTree(root->left) +sizeOfTree(root->right);
}
bool isCBT(Node* root) {
    if (!root) return false;
    int size=sizeOfTree(root);
    queue<Node*> q;
    q.push(root);
    int count=0;
    while (count<size) {
        Node* temp = q.front();
        q.pop();
        count++;
        if(temp){
            q.push(temp->left);
            q.push(temp->right);
        } 
    }
    while(q.size()){
        Node* temp=q.front();
        q.pop();
        if(temp) return false;
    }
    return true;
}
bool isMax(Node* root) {
    if (!root) return true;
    if (!root->left && !root->right) return true;
    if (root->left && !root->right) {
        return root->val >= root->left->val &&
               isMax(root->left);
    }
    if (root->left && root->right) {
        return root->val >= root->left->val &&
               root->val >= root->right->val &&
               isMax(root->left) &&
               isMax(root->right);
    }
    return false; 
}
int main() {
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);
    if(isCBT(root) && isMax(root)) cout<<"MaxHeap"<<endl;
    else cout<<"Nope"<<endl;
    return 0;
}