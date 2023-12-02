class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        map<char,int> mp;
        int ans = 0;
        for(auto c : chars)
            mp[c]++;
        
        
        for(auto word : words)
        {
            bool match = true;
            map<char,int> w;
            for(auto c : word)
            {
                w[c]++;
                if(w[c] > mp[c])
                {
                    match = false;
                    break;
                }
            }
            
            if(match)
                ans += word.size();
        }
        
        return ans;
        
    }
};