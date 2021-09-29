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
    int findHeight(TreeNode* root) {
        
        if(root == NULL) return 0;
        
        int leftD = findHeight(root->left);
        int rightD = findHeight(root->right);
        
        if(leftD == -1 || rightD == -1 || abs(leftD-rightD) > 1) return - 1;
            
        return 1 + max(leftD, rightD);
    }
    
    bool isBalanced(TreeNode* root) {
        return findHeight(root) == -1 ? false : true;
    }
};