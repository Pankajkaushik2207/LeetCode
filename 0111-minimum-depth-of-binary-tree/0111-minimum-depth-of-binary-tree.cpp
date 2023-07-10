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
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int n=0;
        int leftAns = minDepth(root->left);
        int rightAns= minDepth(root->right);
        if(root->left && root->right){
            return min(leftAns,rightAns)+1;
            
        }
        return max(leftAns,rightAns)+1;
    }
};