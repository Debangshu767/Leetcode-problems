class Solution {
public:
    
    int finds(vector<int> &nums,int i,int target)
    {
        if(i == nums.size())
            return target == 0 ;
        
        return finds(nums,i+1,target - nums[i]) + finds(nums,i+1,target + nums[i]);
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        
       return finds(nums,0,target);
        
    }
};