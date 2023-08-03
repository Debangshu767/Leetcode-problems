class Solution {
public:
    
    int minsum(vector<vector<int>> &grid,int m,int n, vector< vector<int>> &dp)
    {
        if(m < 0 || n<0 )
        {
            return 201;
        }
        if(m == 0 && n == 0)
            return grid[0][0];
        
        if(dp[m][n] != -1)
            return dp[m][n];
        
        int right = grid[m][n] + minsum(grid,m-1,n,dp);
        int down = grid[m][n] + minsum(grid,m,n-1,dp);
        
        return dp[m][n] = min(right,down);
        
        
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        
        
        int m = grid.size();
        int n = grid[0].size();
        vector< vector<int>> dp(m, vector<int>(n,-1));
        return minsum(grid,m-1,n-1,dp);
        
    }
};