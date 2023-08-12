class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int currmin = prices[0];
        int profit = 0;
        
        for(int i = 1;i<prices.size();i++)
        {
            profit = prices[i]-currmin > profit ? prices[i]-currmin : profit;
            currmin = currmin < prices[i] ? currmin : prices[i];
        }
        
        return profit;
        
    }
};