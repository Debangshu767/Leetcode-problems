class Solution {
public:
    
   int pathsum(vector<vector<int>>&m,int i, int j,vector<vector<int>> &dp)
    {
        if(i>=m.size() || j >= m[0].size())
            return INT_MAX;
        
        if(i == m.size()-1)
            return m[i][j];
       
       if(dp[i][j] != INT_MAX)
           return dp[i][j];
        
        return dp[i][j] = m[i][j] + min(pathsum(m,i+1,j-1,dp), min(pathsum(m,i+1,j,dp),pathsum(m,i+1,j+1,dp)));
        
    }
    
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
       
        int mini = INT_MAX;
        vector<vector<int>> dp(matrix.size()+1,vector<int>(matrix[0].size()+1,INT_MAX));
        for(int j = 0;j<matrix[0].size();j++)
        {  
            mini = min(mini,pathsum(matrix,0,j,dp));
        }
        
        return mini;
        
    }
};