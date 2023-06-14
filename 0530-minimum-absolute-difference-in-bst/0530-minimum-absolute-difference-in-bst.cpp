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
#include <stack>
#include <climits> // for INT_MAX
#include <algorithm> // for min

class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        std::stack<TreeNode*> st;
        TreeNode* curr = root;
        TreeNode* prev = nullptr;
        
        int res = INT_MAX;
        while (curr != nullptr || !st.empty()) {
            if (curr != nullptr) {
                st.push(curr);
                curr = curr->left;
            } else {
                curr = st.top();
                st.pop();
                if (prev != nullptr) {
                    res = std::min(res, curr->val - prev->val);
                }
                prev = curr;
                curr = curr->right;
            }
        }
        return res;
    }
};
