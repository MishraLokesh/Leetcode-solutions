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
     TreeNode* findPath(TreeNode* root, int targetSum, vector<int> &v, vector<vector<int>> &ret) {
         if(root == NULL) return NULL;
         if(root->left) v.push_back(root->left->val); else v.push_back(-1);
         TreeNode* left = findPath(root->left, targetSum, v, ret);
         v.pop_back(); 
         if(root->right) v.push_back(root->right->val); else v.push_back(-1);
         TreeNode* right = findPath(root->right, targetSum, v, ret);
         v.pop_back();
         if(left == NULL && right == NULL) {
            int sum = 0;
            for(auto it: v)  sum+=it; cout<<sum<<"  ";
            if(sum == targetSum) ret.push_back(v); 
         }  
         return root;
     }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ret;
        vector<int> v;        
        if(root == NULL) return ret;
        v.push_back(root->val);
        TreeNode* temp = findPath(root, targetSum, v, ret);
        return ret;
    }
};