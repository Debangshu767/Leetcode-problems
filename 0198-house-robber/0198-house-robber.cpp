class Solution {
public:
    
    int robre(vector<int> &nums,int i,int ans,vector<int> &dp)
    {
        if(i>=nums.size())
        {
            return 0;
        }
        
        if(dp[i] != -1)
            return dp[i];
        
        
        int nocurr = robre(nums,i+1,ans,dp);
        int curr = nums[i] +  robre(nums,i+2,ans,dp);
            
            return dp[i] =  max(nocurr,curr);
    }
    
    int rob(vector<int>& nums) {
        
        int ans = 0;
        vector<int> dp(nums.size()+1,-1);
      return  robre(nums,0,ans,dp);
        
        
        
        
    }
};