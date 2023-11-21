class Solution {
public:
    
    int rev(int num) {
        int reversed = 0;

        while (num != 0) {

            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }

    return reversed;
    }
    
    int countNicePairs(vector<int>& nums) {
        
        long long count = 0;
        for(int i = 0;i<nums.size();i++)
        {
           nums[i] = nums[i] - rev(nums[i]);
        }
        
        map<int,int> numset;
        
        for(int i = 0;i<nums.size();i++)
        {
            if(numset.find(nums[i]) != numset.end())
            { 
                count+=numset[nums[i]];   
            }
            numset[nums[i]]++;
            
        }
        long long mod = 1000000007;
        count = count%mod;
        return int(count);
        
    }
};