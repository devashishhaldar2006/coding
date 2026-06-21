class Solution {
public:
    typedef pair<TreeNode* ,int > p;
    void markParent(TreeNode* root,unordered_map<TreeNode* ,TreeNode* >& parent){
        if(!root) return;
        if(root->left) parent[root->left]=root;
        if(root->right) parent[root->right]=root;
        markParent(root->left,parent);
        markParent(root->right,parent);
    }
    TreeNode* search(TreeNode* root, int start){
        if(!root) return NULL;
        if(root->val == start) return root;
        TreeNode* left = search(root->left, start);
        if(left) return left;
        return search(root->right, start);
    }
    int amountOfTime(TreeNode* root, int start) {
        if(!root) return 0;
        unordered_map<TreeNode* ,TreeNode* > parent;
        unordered_set<TreeNode* > isInfected;
        queue<p> q;
        TreeNode* infected=search(root,start);
        int level=0;
        markParent(root,parent);
        isInfected.insert(infected);
        q.push({infected,level});
        while(q.size()){
            TreeNode* temp=q.front().first;
            level=q.front().second;
            q.pop();
            if(temp->left && isInfected.find(temp->left)==isInfected.end()){
                isInfected.insert(temp->left);
                q.push({temp->left,level+1});
            }
            if(temp->right && isInfected.find(temp->right)==isInfected.end()){
                isInfected.insert(temp->right);
                q.push({temp->right,level+1});
            }
            if(parent.find(temp)!=parent.end() && isInfected.find(parent[temp])==isInfected.end()){
                    isInfected.insert(parent[temp]);
                    q.push({parent[temp], level+1});
                }
        }
        return level;
    }
};