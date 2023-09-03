class Solution {
public:
    
    vector<vector<int>> ans;
    
    void perm(vector<int> &nums,vector<int> &temp, int freq[])
    {
        if(temp.size() == nums.size())
            ans.push_back(temp);
        
        
        for(int i = 0;i<nums.size();i++)
        {
            if(freq[i] == 0)
            {
                temp.push_back(nums[i]);
                freq[i] = 1;
                perm(nums,temp,freq);
                freq[i] = 0;
                temp.pop_back();
            }
        }
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<int> temp;
        int freq[nums.size()];
        
        for(int i = 0;i< nums.size();i++)
        {
            freq[i] = 0;
        }
        
        perm(nums,temp,freq);
        
        return ans;
        
        
        
        
        
    }
};