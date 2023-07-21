class Solution {
public:
    int balancedStringSplit(string s) {
        
        int lcount  = 0;
        int rcount = 0;
        int size = s.length();
        int ans = 0;
        for(int i = 0;i<size;i++)
        {
            if(s[i] == 'L')
                lcount++;
            else
                rcount++;
            
            if(lcount == rcount)
            {
                ans++;
                lcount = 0;
                rcount = 0;
            }
        }
        
        return ans;
        
    }
};