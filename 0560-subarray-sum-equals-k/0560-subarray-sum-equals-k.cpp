class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        vector<int> prefix;
        prefix.push_back(nums[0]);
        
        for(int i = 1;i<nums.size();i++)
        {
            prefix.push_back(prefix[i-1] + nums[i]);
        }
        
        //  for(int i = 0;i<nums.size();i++)
        // {
        //     cout<<prefix[i]<< " ";
        // }
        unordered_map<int,int> mp;
        int ans =  0;
        for(int i = 0;i<prefix.size();i++)
        {
            if(prefix[i] == k)
                ans++;
            if(mp.find(prefix[i] - k) != mp.end())
            {
                ans+=mp[prefix[i] - k];
            }
            mp[prefix[i]]++;
                
        }
        
        
        
        return ans;
        
    }
};