class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
//         unordered_map<int,int> mp;
        
//         for(int i = 0;i<nums.size();i++)
//         {
//             mp[nums[i]]++;
//         }
        
//         for(auto it : mp)
//         {
//             if(it.second == 1)
//                 return it.first;
//         }
        
//         return -1;
        int ans = nums[0];
        for(int i = 1;i<nums.size();i++)
            ans^= nums[i];
        
        
        return ans;
        
    }
};