class Solution {
public:
    bool isHappy(int n) {
        
        set<int> hashset;
        
        if (n == 1)
            return true;
        
        while(n!= 1)
        {
            int temp = n;
            int n1 = 0;
            while(temp>0)
            {
                int digit = temp%10;
                n1 += digit*digit;
                temp = temp/10;
            }
            
            
            if(n1 == 1)
                return true;
            else if(hashset.find(n1) != hashset.end())
                return false;
            
            hashset.insert(n1);
            n = n1;
        }
        
        return false;
    }
};