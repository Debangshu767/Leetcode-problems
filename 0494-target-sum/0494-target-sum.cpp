class Solution {
public:
    
    int finds(vector<int> &nums, int i, int target, unordered_map<string, int> &dp)
    {
        if(i == nums.size())
            return target == 0;
        
        string key = to_string(i) + "_" + to_string(target);
        if(dp.find(key) != dp.end())
            return dp[key];
        
        int count = 0;
        count += finds(nums, i+1, target - nums[i], dp);
        count += finds(nums, i+1, target + nums[i], dp);
        
        return dp[key] = count;
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<string, int> dp;
        return finds(nums, 0, target, dp);
    }
};
