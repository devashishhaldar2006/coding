class Solution {
public:
    long long count = 0;
    void helper(TreeNode* root, long long& count, long long target) {
        if (!root)
            return;
        if (target == (long long)root->val)
            count++;
        helper(root->left, count, target - (long long)root->val);
        helper(root->right, count, target - (long long)root->val);
    }
    int pathSum(TreeNode* root, long long targetSum) {
        if (!root)
            return 0;
        count = 0;
        helper(root, count, targetSum);
        long long pathsFromRoot = count;
        long long leftPaths = pathSum(root->left, targetSum);
        long long rightPaths = pathSum(root->right, targetSum);
        return pathsFromRoot + leftPaths + rightPaths;
    }
};
