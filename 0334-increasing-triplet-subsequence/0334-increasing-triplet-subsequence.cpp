class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        int n = nums.size();
        
//         for(int i = 0;i<n;i++)
//         {
//             for(int j = i+1;j<n;j++)
//             {
//                 for(int k = j+1;k<n;k++)
//                 {
//                     if(nums[k] > nums[j] && nums[j] > nums[i])
//                         return true;
//                 }
//             }
//         }
        
//         return false;
        
       if(n<3)
           return false;
        
        int mid = INT_MAX;
        int left = INT_MAX;
        
        for(int i = 0;i<n;i++)
        {
            if(nums[i] > mid)
                return true;
            
            else if(nums[i] < mid && nums[i] < left)
                left = nums[i];
            else if(nums[i] > left)
                mid = nums[i];
        }
        
        return false;
        
    }
};