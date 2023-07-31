class Solution {
public:
    
//     int robre(vector<int> &nums,int i,int ans,vector<int> &dp)
//     {
//         if(i>=nums.size())
//         {
//             return 0;
//         }
        
//         if(dp[i] != -1)
//             return dp[i];
        
        
//         int nocurr = robre(nums,i+1,ans,dp);
//         int curr = nums[i] +  robre(nums,i+2,ans,dp);
            
//             return dp[i] =  max(nocurr,curr);
//     }
    
    int rob(vector<int>& nums) {
        
        int ans = 0;
        vector<int> dp(nums.size()+1,-1);
      // return  robre(nums,0,ans,dp);
        
        dp[0] = nums[0];
        
        int neg = 0;
        
        for(int i = 1;i<nums.size();i++)
        {
            int take,nontake;
            if(i == 1)
                take = nums[i];
            else
            take = nums[i] + dp[i-2];
            nontake = dp[i-1];
            
            dp[i] = max(take,nontake);
        }
        
        return dp[nums.size()-1];
        
        
    }
};