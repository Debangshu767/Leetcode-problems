class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        vector<int> ans;
        
        for(int i = 0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            
        }
        int i = 0;
       for(auto it : mp)
       {
           if(it.second > nums.size()/3)
           {
               ans.push_back(it.first);
               i++;
               if(i==2)
                   return ans;
           }
               
               
       }
        
        return ans;
        
    }
};