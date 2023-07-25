class Solution {
public:
    vector<vector<int>> ans;
    
    void combi(vector<int> nums,int i,vector<int> temp)
    {
        if( i == nums.size())
        {
            ans.push_back(temp);
            return;
        }
            
        
        combi(nums,i+1, temp);
        temp.push_back(nums[i]);
        combi(nums,i+1,temp);
        temp.pop_back();
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> temp;
        
        combi(nums,0,temp);
        
        return ans;
        
        
    }
};