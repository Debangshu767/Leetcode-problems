class Solution {
public:
    
    int climb(vector<int> &cost,int i,vector<int> &dp)
    {
        if(i == cost.size()-1)
            return cost[i];
        
        if(i == cost.size()-2)
            return cost[i];
        
        int ones,twos;
        if(dp[i] != -1)
            return dp[i];
        
        
        ones = cost[i] + climb(cost,i+1,dp);
        twos = cost[i] + climb(cost,i+2,dp);
        
        return dp[i] =  min(ones,twos);
            
            
    }
    
    
    int minCostClimbingStairs(vector<int>& cost) {
     
        
        vector<int> dp(cost.size()+1,-1);
        return min(climb(cost,0,dp), climb(cost,1,dp)) ;
        
    }
};