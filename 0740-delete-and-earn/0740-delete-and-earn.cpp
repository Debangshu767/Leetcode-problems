class Solution {
public:
    
    int earn(vector<int> &nums,int i,vector<int> &dp)
    {
        if(i >= nums.size())
            return 0;
        
        int idx = i+1;
        int points = nums[i];
        
        if(dp[i] != -1)
            return dp[i]; 
        
        while(idx<nums.size() && nums[idx] == nums[i])
        {
            points+=nums[i];
            idx++;
        }
        
        while( idx<nums.size() && nums[idx] == nums[i]+1)
            idx++;
        
        
        return dp[i] =  max(points+earn(nums,idx,dp), earn(nums,i+1,dp));
        
    }
    
    
    int deleteAndEarn(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<int> dp(nums.size(),-1);
        
       return earn(nums,0,dp);
        
    }
};