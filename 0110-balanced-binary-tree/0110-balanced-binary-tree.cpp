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
    
    int getHeight(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        
        int lh = getHeight(root->left);
        int rh = getHeight(root->right);
        
        return 1+ max(lh,rh);
    }
    
    bool isBalanced(TreeNode* root) {
        
        if(root == NULL)
            return true;
        
        int lh = getHeight(root->left);
        int rh = getHeight(root-> right);
        
        cout<<lh<<endl;
        cout<<rh;
        
        if(abs(lh-rh) >1)
            return false;
        
       int left = isBalanced(root->left);
       int right = isBalanced(root->right);
        
        if(!left || !right) return false;
        
        return true;
        
    }
};