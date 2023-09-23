class Solution {
public:
    int titleToNumber(string ct) {
        
        // if(ct.length() == 1)
        //     return ct[0] - 'A' + 1;
        
        int ans = 0;
        
        for(int i = 0;i<ct.length();i++)
        {
            if(i == ct.length()-1)
                ans+= ct[i] - 'A' + 1;
            
            else
            {
                ans += (ct[i] - 'A' + 1)*pow(26,ct.length()-1-i);
            }
        }
        
        return ans;
        
    }
};