class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int currmin = prices[0];
        int profit = 0;
        
        for(int i = 1;i<prices.size();i++)
        {
            profit = max(profit,prices[i]-currmin);
            currmin = min(currmin,prices[i]);
        }
        
        return profit;
        
    }
};