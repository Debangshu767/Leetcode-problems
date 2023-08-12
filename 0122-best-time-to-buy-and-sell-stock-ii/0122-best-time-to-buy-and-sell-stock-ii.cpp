class Solution {
public:
    
    
    int solve(vector<int> &prices,int i,int buy,vector<vector<long>> &dp)
    {
        if(i == prices.size())
            return 0;
        
        if(dp[i][buy] != -1) return dp[i][buy];
        
        int profit=0;
        
       if(buy)  profit = max(-(prices[i]) + solve(prices,i+1,0,dp) , solve(prices,i+1,1,dp));
        else  profit = max(prices[i] + solve(prices,i+1,1,dp),solve(prices,i+1,0,dp));
        
         return dp[i][buy] =  profit;
        
    }
    
    int maxProfit(vector<int>& prices) {
        
        vector<vector<long>> dp(prices.size(),vector<long>(2,-1));
        
        int buy = 1;
       return solve(prices,0,buy,dp);
        
    }
};

// int solve(int idx,vector<int>& prices,int opt,vector<vector<int>> &dp){
//         if(idx == prices.size())
//             return 0;
//         if(dp[idx][opt] != -1)
//             return dp[idx][opt];
//         int profit = 0;
//         if(opt == 0){
//             profit = max(-prices[idx]+solve(idx+1,prices,1,dp),solve(idx+1,prices,0,dp));
//         }
//         else{
//             profit = max(prices[idx]+solve(idx+1,prices,0,dp),solve(idx+1,prices,1,dp));
//         }
//         return dp[idx][opt] = profit;
//     }
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         vector<vector<int>> dp(n,vector<int>(2,-1));
//         return solve(0,prices,0,dp);
//     }