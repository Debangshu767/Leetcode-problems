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
    
    
    TreeNode* cmb(vector<int> &nums,int s,int e)
    {
        
        if(s>e)
            return NULL;
        
        int maxidx = -1;
        int maxi = INT_MIN;
        
        for(int i = s;i<=e;i++)
        {
            if(nums[i] > maxi)
            {
                maxidx = i;
                maxi = nums[i];
            }
        }
        
        TreeNode* root = new TreeNode(nums[maxidx]);
        
        root ->left = cmb(nums,s,maxidx-1);
        root -> right = cmb(nums,maxidx+1,e);
        return root;
    }
    
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        
        return  cmb(nums,0,nums.size()-1);
        
        
    }
};
