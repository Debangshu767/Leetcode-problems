class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        
        vector<vector<int>> ans = matrix;
        
        for(int i = 0;i<matrix.size();i++)
        {
            for(int  j = 0;j<matrix[i].size();j++)
            {
                if(ans[i][j] == 0)
                {
                    int v = 0;
                    while(v < matrix.size())
                    {
                        matrix[v][j] = 0;
                        v++;
                    }
                    int h = 0;
                    while(h < matrix[i].size())
                    {
                        matrix[i][h] = 0;
                        h++;
                    }
                }
            }       
        }
        
    }
};