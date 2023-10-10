class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        
        vector<string> ans;
        stringstream ss(text);
        
        string word,n1,n2;
        
        while(ss>>word)
        {
            if(n1 == second && n2 == first)
                ans.push_back(word);
            
            n2 = n1;
            n1 = word;
            
        }
        
        return ans;
        
        
    }
};