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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL) return {};
        
        vector<vector<int>> ret;
        queue<TreeNode*> que;
        que.push(root);
        TreeNode* front;
        int len;
        
        while(!que.empty()){
            len = que.size();
            vector<int> temp;            
            for(int i=0;i<len;i++) {
                front = que.front();
                que.pop();
                temp.push_back(front->val);
                
                if(front->left) que.push(front->left);
                if(front->right) que.push(front->right);
            }
            
            ret.push_back(temp);
        }
        return ret;
    }
};