class Solution {
public:
    
    vector<vector<int>> ans;
    
    void combi(int idx,vector<int> nums,vector<int> temp)
    {
       // if(idx >= nums.size())
        //{
            ans.push_back(temp);
         //   return;
       // }
        
        for(int i = idx;i<nums.size();i++)
        {
            if(i== idx || nums[i] != nums[i-1])
            {
                temp.push_back(nums[i]);
                combi(i+1,nums,temp);
                temp.pop_back();
                //combi(i+1,nums,temp);
            }
        }
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        vector<int> temp;
            combi(0,nums,temp);
        
        return ans;
        
    }
};