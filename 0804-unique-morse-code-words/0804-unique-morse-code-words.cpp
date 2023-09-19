class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        
        vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        map<char,string> mp;
        for(int i = 0;i<26;i++)
        {
            mp['a' + i] = morse_code[i];
        }
        
        unordered_set<string> ans;
        for(auto word : words)
        {
            string code = "";
            
            for(auto letter : word)
            {
                code += mp[letter];
            }
            ans.insert(code);
        }
        
        
        return ans.size();
    }
};