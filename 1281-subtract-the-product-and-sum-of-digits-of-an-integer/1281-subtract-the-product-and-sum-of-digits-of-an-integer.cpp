class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int temp  = n;
        vector<int> digits;
        while(temp>0)
        {
            int d = temp%10;
            digits.push_back(d);
            temp = temp/10;
            
        }
        
        int prod = 1;
        int sum = 0;
        
        for(int i = 0;i<digits.size();i++)
        {
            sum += digits[i];
            prod *= digits[i];
        }
        
        return prod - sum;
        
    }
};