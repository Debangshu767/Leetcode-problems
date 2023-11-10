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
    unordered_map<int,int>mp;
    
    void helper(TreeNode* root)
    {
        if(root == NULL)
            return;
        
        mp[root->val]++;
        helper(root->left);
        helper(root->right);
    }
    vector<int> findMode(TreeNode* root) {
     
        helper(root);
    
    int maxi = -1;
    vector<int> ans;
    for(auto it : mp)
    {
        if(it.second > maxi)
        {
            ans = {it.first};
            maxi = it.second;
        }
        else if(it.second == maxi)
        {
            ans.push_back(it.first);
        }
    }
    return ans;
        
    }
};