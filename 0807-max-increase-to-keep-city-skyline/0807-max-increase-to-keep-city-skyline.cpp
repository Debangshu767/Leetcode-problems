class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
        
        vector<int> row,col;
        
        for(int i = 0;i<grid.size();i++)
        {
            int maxi = -1;
            for(int j  = 0;j<grid[i].size();j++)
            {
                 maxi = max(maxi,grid[i][j]);
            }
            row.push_back(maxi);
        }
        
        
        for(int i = 0;i<grid.size();i++)
        {
            int maxi = -1;
            for(int j  = 0;j<grid[i].size();j++)
            {
                 maxi = max(maxi,grid[j][i]);
            }
            col.push_back(maxi);
        }
        
        
        int  sum = 0;
        
        for(int i = 0;i<grid.size();i++)
        {
            for(int j  = 0;j<grid[i].size();j++)
            {
                sum += abs(grid[i][j] - min(row[i],col[j]));
            }
         
        }
        
        return sum;
        
    }
};