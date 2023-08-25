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
    
    bool sym(TreeNode* rl,TreeNode* rr)
    {
        if(rl == NULL && rr == NULL)
            return true;
        
        if(!rl || !rr)
            return false;
            
        
        if(rl->val != rr->val)
            return false;
        
       return sym(rl->left,rr->right) && sym(rl->right,rr->left);
        
        
        
    }
    bool isSymmetric(TreeNode* root) {
        
        
        
       return sym(root->left,root->right);
            
        
    }
};