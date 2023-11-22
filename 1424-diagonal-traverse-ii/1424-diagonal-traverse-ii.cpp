class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        
        
            int sum = 0;
            for (auto i : nums) {
                sum += i.size();
            }
        vector<vector<int>> digs(sum);
        
        
        
        for(int i = 0;i<nums.size();i++)
        {
            for(int j = 0;j<nums[i].size();j++)
            {
                digs[i+j].push_back(nums[i][j]);
            }
        }
        
        vector<int> ans;
        
        for(int i = 0;i<digs.size();i++)
        {
            for(int j = digs[i].size()-1;j>=0;j--)
            {
                ans.push_back(digs[i][j]);
            }
        }
        
        return ans;
        
    }
};