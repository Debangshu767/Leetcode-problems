class Solution {
public:
    
    map<char,char> mp;
    
    char find(char ch)
    {
        if(mp[ch] == ch)
            return ch;
        else
            return mp[ch] =  find(mp[ch]);
    }
    
    bool equationsPossible(vector<string>& eqs) {
        
        
        for(char c = 'a';c<='z';c++)
        {
           mp[c] = c;
            
        }
        
        for(auto eq : eqs)
        {
            if(eq[1] == '=')
                mp[find(eq[0])] = find(eq[3]);
        }
        
        for(auto eq : eqs)
        {
            if(eq[1] == '!' && find(eq[0]) == find(eq[3]))
                return false;
                
        }
        
        return true;
        
    }
};