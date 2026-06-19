#include <iostream>
#include <vector>
#include <queue>
// for minHeap use preorder  traversal and for max use postorder
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
void inorder(Node* root, vector<int>& values) {
    if (!root) return;
    inorder(root->left, values);
    values.push_back(root->val);
    inorder(root->right, values);
}
void postorder(Node* root, vector<int>& values, int& idx) {
    if (!root) return;
    postorder(root->left, values, idx);
    postorder(root->right, values, idx);
    root->val = values[idx++];
}
void bstToMaxHeap(Node* root) {
    vector<int> values;
    inorder(root, values);   // Sorted values from BST
    int idx = 0;
    postorder(root, values, idx);
}
void levelOrderQueue(Node* root) {
    if (!root) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << temp->val << " ";

        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
    }
    cout << endl;
}

int main() {
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    cout << "Before: ";
    levelOrderQueue(root);

    bstToMaxHeap(root);

    cout << "After: ";
    levelOrderQueue(root);

    return 0;
}