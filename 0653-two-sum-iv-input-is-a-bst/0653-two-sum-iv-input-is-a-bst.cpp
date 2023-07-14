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
    void storeInorder(TreeNode* root, vector<int> &inOrder){
        if(root==NULL){
            return;
        }
        
        storeInorder(root->left,inOrder);
        inOrder.push_back(root->val);
        storeInorder(root->right,inOrder);
        
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>inOrder;
        storeInorder(root,inOrder);
        int s=0;
        int e=inOrder.size()-1;
        
        while(s<e){
            int sum = inOrder[s]+inOrder[e];
            // if(inOrder[s]==k ||inOrder[e]==k){
            //     return true;
            // }
            
            if(sum==k){
                return true;
            }
            else if(sum>k){
                e--;
            }else{
                s++;
            }
        }
        return false;
    }
};