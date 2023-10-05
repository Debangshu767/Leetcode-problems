class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        set<vector<int>> sans;
        for(int i = 0;i<nums.size();i++)
        {
            int j = i+1;
            int k = nums.size()-1;
            
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k] == 0)
                {
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    sans.insert(temp);
                    j++;
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k] <0)
                    j++;
                else if(nums[i]+nums[j]+nums[k] >0)
                    k--;
            }
        }
        
        vector<vector<int>> ans(sans.begin(),sans.end());
        
        return ans;
        
    }
};