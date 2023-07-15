class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        long long product = 1;
        vector<int> ans;
        int contains0 = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            product *=nums[i];
            else
                contains0++;
        }
        cout<<contains0;
        cout<<product;
        for(int i = 0;i<nums.size();i++)
        {
            
            if(contains0 >=2)
                ans.push_back(0);
            else if(nums[i] == 0 && contains0<2)
                ans.push_back(product);
            else if(nums[i] == 0 && contains0>2)
                ans.push_back(product);
            else if(contains0 == 0)
                ans.push_back(product/nums[i]);
            else if(nums[i] != 0 && contains0 == 1)
                    ans.push_back(0);
        }
        
        return ans;
        
    }
};