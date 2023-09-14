class Solution {
public:
    string truncateSentence(string st, int k) {
        
       string s;
        
        int i = 0;
        while(k>0 && i <st.length())
        {
            if(st[i] == ' ')
                k--;
            
            s+= st[i];
            i++;
                
        }
        
        if(s[s.length()-1] == ' ')
            s.pop_back();
        return s;
        
    }
};