class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
         int size = mat.size();

        int i = 4;
        while(i !=0)
        {
            if(mat == target)
                return true;
                for(int i = 0;i<size;i++)
            {
                for(int j = 0;j<i;j++)
                {
                    swap(mat[i][j],mat[j][i]);
                }
            }

            for(int i = 0;i<size;i++)
            {
                reverse(mat[i].begin(),mat[i].end());
            }
            
            i--;
        }
        
        return false;
        
    }
};