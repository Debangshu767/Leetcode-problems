class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        const int cnt = 9;
        bool row[cnt][cnt] = {false};
        bool col[cnt][cnt] = {false};
        bool sub[cnt][cnt] = {false};
        
        for(int i = 0;i<9;i++)
        {
            for(int j = 0;j<9;j++)
            {
                if(board[i][j] == '.')
                    continue;
                
                int idx = board[i][j] - '0' - 1;
                int area = (i/3)*3 + (j/3);
                if(row[i][idx] || col[j][idx] || sub[area][idx])
                    return false;
                
                row[i][idx] = true;
                col[j][idx] = true;
                sub[area][idx] = true;
            }
        }
        
        return true;
        
    }
};