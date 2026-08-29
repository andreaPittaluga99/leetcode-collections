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
#include <stack>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution {
public:
    std::vector<int> inorderTraversal(TreeNode* root) {
        if(root == nullptr) return {};
        
        TreeNode* curr = root;
        TreeNode* prev = nullptr;
        std::stack<TreeNode*> st;
        st.push(curr);
        std::vector<int> ret;
        while(!st.empty()) {
            
        }

    }
};