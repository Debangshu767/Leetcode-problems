class Solution {
public:
    string sortVowels(string s) {
        
        vector<char> vow;
        vector<char> cons;
        string ans;
        
        for(auto c : s)
        {
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
                vow.push_back(c);
            else
                cons.push_back(c);
        }
      int  vcount = 0;
        int scount = 0;
        
        sort(vow.begin(),vow.end());
        for(auto c : s)
        {
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
                ans+= vow[vcount++];
            else
                ans+= cons[scount++];
        }
        
        return ans;
        
    }
};