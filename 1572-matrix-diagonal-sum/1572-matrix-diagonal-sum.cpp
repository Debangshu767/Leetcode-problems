class Solution {
public:
    int diagonalSum(vector<vector<int>>& nums) {
        
        
        int sum = 0;
        for(int i = 0;i<nums.size();i++)
        {
            for(int j = 0;j<nums[0].size();j++)
            {
                if(i == j)
                    sum+=nums[i][j];     
                else if(i+j == nums.size()-1 && i!= j)
                    sum+=nums[i][j];
            }
        }
        

        
        return sum;
        
    }
};