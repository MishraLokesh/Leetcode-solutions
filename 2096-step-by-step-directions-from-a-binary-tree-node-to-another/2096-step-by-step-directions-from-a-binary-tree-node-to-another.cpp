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


// This thing is sure that startValue and destValue will be on either side of the LCA
class Solution {
public:
    bool findPath(TreeNode* root, int target, string &str){
        if(root == NULL) return false;
        if(root->val == target) return true;
        
        str+="L";
        bool left = findPath(root->left, target, str);
        if(left == true) return true;
        str.pop_back();
        str+="R";
        bool right = findPath(root->right, target, str);
        if(right == true) return true;
        str.pop_back();
        
        return false;
    }
    
    TreeNode* findlca(TreeNode* root, int source , int destination){
        if(!root)
            return NULL;
        if(root->val == source || root->val == destination)
            return root;
        auto left =  findlca(root->left,source,destination);
        auto right = findlca(root->right,source,destination);
        
        if(left && right) //if both nodes are found return LCA
            return root;
        if(!left && !right )
            return NULL;
        return left ? left : right;
    }
    
    string getDirections(TreeNode* root, int startValue, int destValue) {
        TreeNode* lca = findlca(root, startValue, destValue);
        string path = "";
        
        bool leftpath = findPath(lca, startValue, path);
        for(int i=0;i<path.length();i++) path[i] = 'U';
        
        bool rightpath = findPath(lca, destValue, path);
        
        return path;
        
    }
    
};



//9.07 - 46




