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
        
      // return  robre(nums,0,ans,dp);
        int prev = nums[0];
        int prev2 = 0;
       
        
        for(int i = 1;i<nums.size();i++)
        {
             int take,nontake,curr;
            
            take = nums[i] + prev2;
            nontake = prev;
            
            
            
            curr = max(take,nontake);
            
            prev2 = prev;
            prev = curr;
            
        }
        
        return prev;
        
        
    }
};