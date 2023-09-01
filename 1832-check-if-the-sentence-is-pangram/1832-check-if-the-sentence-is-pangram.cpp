class Solution {
public:
    bool checkIfPangram(string se) {
        
    vector<int> c(26,0);
        
        
        for(int i = 0;i<se.size();i++)
        {
            c[se[i] - 'a'] = 1;
        }
        
        for(int i = 0;i<c.size();i++)
        {
            if(c[i] == 0)
                return false;
        }
        
        return true;
        
    }
};