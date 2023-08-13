class Solution {
public:
    
    bool jump(vector<int>&nums,int i,vector<int> &dp)
    {
        if(i == nums.size()-1)
            return true;
        
        
        if(dp[i] != -1)
            return dp[i];
        
       if(nums[i] != 0)
       {
           for(int ind = 1 ;ind <= nums[i];ind++ )
           {
               if(i+ind < nums.size())
                if(jump(nums,i+ind,dp)) return dp[i] =  1;
           }
       }
        return dp[i] =  0;
        
    }
    
    bool canJump(vector<int>& nums) {
        
        vector<int> dp(nums.size(),-1);
        
      return jump(nums,0,dp);
        
    }
};