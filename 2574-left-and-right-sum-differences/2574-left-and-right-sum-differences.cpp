class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        int totalsum = 0;
        int currsum = 0;
        vector<int> ans;
         
        for(int i = 0;i<nums.size();i++)
        {
            totalsum +=nums[i];
        }
        
        for(int i =0;i<nums.size();i++)
        {
            int leftsum = currsum;
            int rightsum = totalsum-nums[i]-currsum;
            
            ans.push_back(abs(leftsum-rightsum));
            
            currsum += nums[i];
            
        }
        
        return ans;
        
    }
};