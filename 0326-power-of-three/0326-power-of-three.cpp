class Solution {
public:
    bool isPowerOfThree(int n) {
        
        long long num = 3;
        
        if(n == 1)
            return true;
        
        while(num < n)
        {
            num*=3;
        }
        
        if(num > n)
            return false;
        return true;
        
    }
};