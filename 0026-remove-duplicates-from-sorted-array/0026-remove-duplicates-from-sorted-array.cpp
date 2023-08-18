class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = nums[0];
        
        for(int i = 1;i<nums.size();i++)
        {
            if(nums[i] != prev)
                prev = nums[i];
            else
            {
                nums.erase(nums.begin()+i);
                    i--;
            }
        }
        
        return nums.size();
    }
};