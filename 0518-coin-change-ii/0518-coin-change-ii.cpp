class Solution {
public:
    
    int check(int amount,vector<int> &coins,int i,vector<vector<int>>&dp)
    {
        if(amount == 0)
            return 1;
        
        
        if(i>=coins.size())
            return 0;
    
        if(dp[i][amount] != -1)
            return dp[i][amount];
            
        
        int take=0,notake=0;
        if(coins[i] <= amount)
            {
                take = check(amount-coins[i],coins,i,dp);
               
            }
        notake =  check(amount,coins,i+1,dp);
        
        return dp[i][amount] =  take+notake;
        
        
    }
    
    int change(int amount, vector<int>& coins) {
        
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        
      return  check(amount,coins,0,dp);
        
    }
};