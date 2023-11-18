class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        
        int left = 0;
        int right = 0;
        long long currsum = 0;
        int maxi = 0;
        while(right<nums.size())
        {
             currsum+=nums[right];
            while((long)(right-left + 1)*nums[right] > currsum+k)
            {
               currsum-=nums[left];
                left++;
            }
            
            
             maxi = max(maxi,right-left+1);
            right++; 
            
                
        }
        
        return maxi;
        
    }
};