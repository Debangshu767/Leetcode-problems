class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string s1,s2;
        
        for(auto elem : word1)
        {
            s1+=elem;
        }
        
        for(auto elem : word2)
        {
            s2+=elem;
        }
        
        return(s1 == s2);
        
        
    }
};