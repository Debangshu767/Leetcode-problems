class Solution {
public:
    
//     int findsum(vector<int> &nums, int n)
//     {
//         if(n == 0)
//             return nums[0];
        
//         for(int i = 0;i<n;i++)
//         {
//             nums[i] += nums[i+1];
//             if(nums[i] > 9)
//                 nums[i] = nums[i]%10;
//         }
        
//         // for(int i = 0;i<n;i++)
//         // {
//         //     cout<<nums[i]<< " ";
//         // }
//         // cout<<endl;
        
//         return findsum(nums,n-1);
//     }
    
    
    int triangularSum(vector<int>& nums) {
        
       //  int n = nums.size()-1;
       // return findsum(nums,n);

     int n(size(nums));
        while (n > 1) {
            for (int i=0; i<n-1; i++)
                nums[i] = (nums[i] + nums[i+1]) % 10;
            n--;
        }
        return nums[0];
        
    }
};