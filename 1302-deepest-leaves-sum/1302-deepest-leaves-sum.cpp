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
    
    int maxd = 0;
    int sum = 0;
    
    int dls(TreeNode* root, int depth)
    {
         if(root == NULL)
            return 0;
        
        if(root->left == NULL && root->right == NULL)
          { if(depth == maxd) 
              sum += root -> val;
		    else if(depth > maxd)
                {
                    sum = root -> val;
                    maxd = depth;
                }
          }
        
     dls(root->left,depth+1);
     dls(root->right,depth+1);
        
        return sum;
    }
    
    int deepestLeavesSum(TreeNode* root) {
        
       return dls(root,0);
        
        
        
    }
};