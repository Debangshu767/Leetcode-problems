class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int n = nums.size();
        vector <int> temp = nums;
        sort(temp.begin(),temp.end());
        
        vector<int> ans;
        map<int,int> mp;
        
        for(int i=n-1;i>=0;i--)
        {
            mp[temp[i]]=i;
        }
        for(int i = 0;i<n;i++)
        {
            ans.push_back(mp[nums[i]]);
        }
        
        return ans;
        
    }
};