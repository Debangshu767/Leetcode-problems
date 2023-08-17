class Solution {
public:
    
    int up(vector<vector<int>>&ob,int i,int j,vector<vector<int>> &dp)
    {
        if(i == ob.size()-1 && j == ob[i].size()-1)
            return ob[i][j] != 1;
        
        if(i >= ob.size() || j >= ob[0].size())
            return 0;
        
        
        if(ob[i][j] == 1)
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int down;
        int left;
        down = up(ob,i+1,j,dp);
        left = up(ob,i,j+1,dp);
        
        return dp[i][j] =  down+left;
            
    }
    
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        vector<vector<int>> dp(obstacleGrid.size(),vector<int>(obstacleGrid[0].size(),-1));
       return up(obstacleGrid,0,0,dp);
        
    }
};