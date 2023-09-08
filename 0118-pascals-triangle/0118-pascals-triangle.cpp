class Solution {
public:
    
    vector<vector<int>> ans;
    
    void gen(int numrows, int i, vector<int> &temp)
    {
        if(i>numrows+1)
            return;
        
        ans.push_back(temp);
        vector<int> row(i);

            row[0] = 1;
            row[i-1] = 1;
            
            for(int j = 1;j<i-1;j++)
            {
                row[j] = temp[j-1] + temp[j];
            }
        gen(numrows,i+1,row);
        
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<int> temp;
        temp.push_back(1);
        gen(numRows,2,temp);
        
        return ans;
        
    }
};