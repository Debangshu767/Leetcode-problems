class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        set<int> ans;
        for(int i = 0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]] > nums.size()/3 )
            {
                 ans.insert
                     (nums[i]);
               if(ans.size() == 2)
                   return vector<int>(ans.begin(),ans.end());
            }
            
        }
        
        
        return vector<int>(ans.begin(),ans.end());
        
    }
};