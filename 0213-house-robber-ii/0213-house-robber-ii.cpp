class Solution {
public:
    
    int isftaken = -1;
    
    int robre(vector<int> &nums,int i,vector<int> &dp)
    {
        if(i>=nums.size())
            return 0;
            
        if(dp[i] != -1)
            return dp[i];
        
        
        int notake = robre(nums,i+1,dp);
        int taken = nums[i] + robre(nums,i+2,dp);
         
        
        return dp[i] = max(taken,notake);
    }
    
    int rob(vector<int>& nums) {
        
        
        if(nums.size() == 1) return nums[0];
        
        if(nums.size() == 2) return max(nums[0],nums[1]);
        
        int temp = nums[0];
        vector<int> dp(nums.size()+1,-1);
        nums[0] = 0;
       int ans1 = robre(nums,0,dp);
        nums[0] = temp;
        
        nums.pop_back();
        vector<int> dp2(nums.size()+1,-1);
        int ans2 = robre(nums,0,dp2);
        
        return max(ans1,ans2);
        
        
    }
};