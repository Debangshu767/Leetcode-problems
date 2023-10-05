class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
         sort(nums.begin(),nums.end());
        //set<vector<int>> sans;
        vector<vector<int>> ans;
        for(int i = 0;i<nums.size();i++)
        {
            if( i != 0 && nums[i] == nums[i-1])
                continue;
            
            for(int m = i+1;m<nums.size();m++)
            {
                if( m != i+1 && nums[m] == nums[m-1])
                continue;
                
            int j = m+1;
            int k = nums.size()-1;
            
            while(j<k)
            {
                long long sum = nums[i]+nums[j];
                sum+= nums[k];
                sum+= nums[m];
                if(sum == target)
                {
                    vector<int> temp = {nums[i],nums[j],nums[k],nums[m]};
                    //sans.insert(temp);
                    ans.push_back(temp);
                    while (j < k && nums[j] == nums[j + 1]) {
                        j++;
                    }
                    j++;
                    
                    while (j < k && nums[k - 1] == nums[k]) {
                        k--;
                    }
                    k--;
                }
                else if(sum <target)
                    j++;
                else if(sum >target)
                    k--;
            }
        }
                
            }
            
        
        //vector<vector<int>> ans(sans.begin(),sans.end());
        
        return ans;
        
    }
};