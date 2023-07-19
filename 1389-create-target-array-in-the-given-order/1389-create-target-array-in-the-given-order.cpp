class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        int size = nums.size();
        vector<int> ans;
        
        for(int i = 0;i<size;i++)
        {
            ans.insert(ans.begin()+index[i],nums[i]) ;
        }
        
        return ans;
        
    }
};