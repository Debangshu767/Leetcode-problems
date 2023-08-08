class Solution {
public:
    int countMatches(vector<vector<string>>& items, string rulekey, string rulevalue) {
        
        int j = 0;
        
        if(rulekey == "type") 
            j = 0; 
        else if(rulekey == "color") 
            j = 1; 
        else 
            j = 2;
        
        int ans = 0;
        for(int i = 0;i<items.size();i++)
        {
            if(items[i][j] == rulevalue)
                ans ++;
        }
        
        return ans;        
    }
};