class Solution {
public:
    
//     int sums(vector<int>nums,int i,int sum)
//     {
//         if(i == nums.size())
//             return sum;
    
//         sum +=nums[i];
//        return sums(nums,i+1,sum);
//     }
    
    int missingNumber(vector<int>& nums) {
        
        int sum = 0;
        
        for(int i = 0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        
        int n = nums.size();
        
        int trueSum = (n*(n+1))/2;
        return trueSum-sum;
        
        
        
    }
};