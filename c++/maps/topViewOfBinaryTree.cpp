#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
TreeNode* construct(int arr[], int n){
    if(n == 0 || arr[0] == INT_MIN) return NULL;
    queue<TreeNode*> q;
    TreeNode* root = new TreeNode(arr[0]);
    q.push(root);

    int i = 1;

    while(!q.empty() && i < n){
        TreeNode* temp = q.front();
        q.pop();
        // Left child
        if(i < n && arr[i] != INT_MIN){
            temp->left = new TreeNode(arr[i]);
            q.push(temp->left);
        }
        i++;
        // Right child
        if(i < n && arr[i] != INT_MIN){
            temp->right = new TreeNode(arr[i]);
            q.push(temp->right);
        }
        i++;
    }
    return root;
};

void levelOrderQueue(TreeNode* root){//BFS
    queue < TreeNode* > q;
    q.push(root);
    while(q.size()){
        TreeNode* temp=q.front();
        q.pop();//pop
        cout<<temp->val<<" ";//ans
        if(temp->left) q.push(temp->left);//push
        if(temp->right) q.push(temp->right);
    }
    cout<<endl;
};
void topView(TreeNode* root){
    unordered_map<int,int> m;
    queue< pair<TreeNode*,int> > q;
    pair < TreeNode*,int > r;
    r.first=root;
    r.second=0;
    q.push(r);
    while(q.size()){
        TreeNode* temp=q.front().first;
        int level=q.front().second;
        q.pop();
        if(m.find(level)==m.end()){
           m[level]=temp->val;
        }
        if(temp->left){
            pair<TreeNode*,int> p;
            p.first=temp->left;
            p.second=level-1;
            q.push(p);
        }
        if(temp->right){
            pair<TreeNode*,int> p;
            p.first=temp->right;
            p.second=level+1;
            q.push(p);
        }
    }
    int minLevel=INT_MAX;
    int maxLevel=INT_MIN;
    for(auto x:m){
        int level=x.first;
        minLevel=min(minLevel,level);
        maxLevel=max(maxLevel,level);
    }
    for(int i=minLevel;i<=maxLevel;i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
    return;

}
int main(){
    int a[]={1,2,INT_MIN,4,INT_MIN,6,7,8,INT_MIN,10};
    int n=sizeof(a)/sizeof(int);
    TreeNode* root=construct(a,n);
    topView(root);
}