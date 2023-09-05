class Solution {
public:
    vector<string> cellsInRange(string s) {
        
        char fchar = s[0];
        int fnum = stoi(s.substr(1,1));
        char schar = s[3];
        int snum = stoi(s.substr(4,1));
        
        vector<string> ans;
        for(char c = fchar; c<=schar;c++)
        {
            for(int i = fnum;i<=snum;i++)
            {
                string st = c + to_string(i);
                ans.push_back(st);
            }
        }
        
        return ans;
        
        
        
    }
};