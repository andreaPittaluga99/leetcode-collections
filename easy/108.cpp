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

 #include <vector>


class Solution {
public:
    TreeNode* aux(std::vector<int>& nums, int left, int right) {
        if (left > right) return nullptr;

        int mid = left + (right - left) / 2;

        TreeNode* root = new TreeNode(nums[mid]);
        root->left = aux(nums, left, mid - 1);
        root->right = aux(nums, mid + 1, right);

        return root;
    }

    TreeNode* sortedArrayToBST(std::vector<int>& nums) {
        return aux(nums, 0, nums.size() - 1);
    }
};
