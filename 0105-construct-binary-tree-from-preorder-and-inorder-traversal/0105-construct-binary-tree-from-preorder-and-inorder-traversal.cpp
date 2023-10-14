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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> inIndex;
        for (int i = 0; i < inorder.size(); i++) {
            inIndex[inorder[i]] = i;
        }
        int preIndex = 0;
        return build(preorder, preIndex, inorder, 0, inorder.size() - 1, inIndex);
    }

private:
    TreeNode* build(vector<int>& preorder, int& preIndex, vector<int>& inorder, int inStart, int inEnd, unordered_map<int, int>& inIndex) {
        if (inStart > inEnd) {
            return nullptr;
        }

        TreeNode* root = new TreeNode(preorder[preIndex]);
        int inRootIndex = inIndex[preorder[preIndex]];

        preIndex++;

        root->left = build(preorder, preIndex, inorder, inStart, inRootIndex - 1, inIndex);
        root->right = build(preorder, preIndex, inorder, inRootIndex + 1, inEnd, inIndex);

        return root;
    }
};
