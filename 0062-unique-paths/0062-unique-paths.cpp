class Solution {
public:
    
    int getpaths(int m,int n, vector<vector<int>> &dp )
    {
        if(m < 0 || n< 0)
            return 0;
        if(m == 1 && n == 1)
            return 2;
        if(m == 0 && n == 0)
            return 1;
        
        if(dp[m][n] != -1)
            return dp[m][n];
        
        return dp[m][n] =  getpaths(m-1,n,dp) + getpaths(m,n-1,dp);
        
    }
    
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> dp(m, vector<int>(n,-1));
            
       return  getpaths(m-1,n-1,dp);
        
    }
};