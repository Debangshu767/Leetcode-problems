class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        
        vector<int> prefix(nums.size()+1,0);
        for(int i = 0;i<nums.size();i++)
        {
            prefix[i+1] = prefix[i]^nums[i];
        }
        long long ans = 0;
        map<int,int> mp;
        mp[0] = 1;
        for(int i  = 1;i<prefix.size();i++)
        {
            if(mp[prefix[i]]) ans +=mp[prefix[i]];
            
            mp[prefix[i]]++;
        }
        
        return ans;
        
    }
};