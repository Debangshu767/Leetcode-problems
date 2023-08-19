class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> pos;
        vector<int> neg;
        
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] < 0)
                neg.push_back(nums[i]);
            else
                pos.push_back(nums[i]);
        }
        
        int f = 0;
        int s = 1;
        int i = 0;
        while(s <= nums.size()-1)
        {
            nums[f] = pos[i];
            nums[s] = neg[i];
            i++;
            f+=2;
            s+=2;
        }
        
        return nums;
        
    }
};