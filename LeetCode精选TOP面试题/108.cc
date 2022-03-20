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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        // 分治
        return helper(nums, 0, nums.size());
    }

private:
    TreeNode* helper(vector<int>& nums, int left, int right) {
        if (left == right) retrun nullptr;
        else if (left+1 == right) return new TreeNode(nums[left]);
        else {
            int mid = left + (right - left)/2;
            TreeNode* cur = new TreeNode(nums[mid]);
            cur->left = helper(nums, left, mid);
            cur->right = helper(nums, mid+1, right);
            return cur;
        }
        return nullptr;
    }
};