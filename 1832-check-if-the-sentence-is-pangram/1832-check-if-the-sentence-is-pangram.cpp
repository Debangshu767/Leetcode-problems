class Solution {
public:
    bool checkIfPangram(string se) {
        
     map<char,bool> mp;
        
        
        for(int i = 0;i<se.size();i++)
        {
            mp[se[i]] = true;
        }
        
        if(mp.size() != 26)
            return false;
        
        return true;
        
    }
};