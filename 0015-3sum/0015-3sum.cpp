class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());  
        vector<vector<int>> ans;
        for(int i = 0;i<nums.size();i++)
        {
            if( i != 0 && nums[i] == nums[i-1])
                continue;
            int j = i+1;
            int k = nums.size()-1;
            
            while(j<k)
            {
                int sum = nums[i]+ nums[j] + nums[k];
                    
                    if(sum < 0)
                    {
                        j++;
                    }
                    if(sum > 0)
                    {
                        k--;
                    }
                if(sum == 0)
                {
                    vector<int> ans1;
                    ans1.push_back(nums[i]);
                    ans1.push_back(nums[j]);
                    ans1.push_back(nums[k]);
                    ans.push_back(ans1);
                    
                    while (j < k && nums[j] == nums[j + 1]) {
                        j++;
                    }
                    j++;
                    
                    while (j < k && nums[k - 1] == nums[k]) {
                        k--;
                    }
                    k--;
                }
            }
            
        }
        return ans;
        
        
    }
};