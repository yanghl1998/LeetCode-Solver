/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        helper(root, res);
        return res;
    }

private:
    void helper(TreeNode* root, vector<int>& res) {
        if (root == nullptr) return;
        if (root->left != nullptr) helper(root->left, res);
        res.push_back(root->val);
        if (root->right != nullptr) helper(root->right, res);
        return;
    }
};