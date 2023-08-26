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
    
    int ans = 0;
    int averageOfSubtree(TreeNode* root) {
        
        avg(root);
        
        return ans;
        
    }
    
    pair<int,int> avg(TreeNode* root)
    {
        if(!root)
            return {0,0};
        
       auto left = avg(root->left);
       int lsum =  left.first;
       int lcount = left.second;
        
        auto right = avg(root->right);
      int  rsum =  right.first;
      int  rcount = right.second;
        
        if((lsum+rsum+root->val)/(lcount+rcount+1) == root->val)
            ans++;
        
        return {lsum+rsum+root->val,(lcount+rcount+1)};
            
    }
};