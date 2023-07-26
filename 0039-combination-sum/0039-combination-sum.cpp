class Solution {
public:
    vector<vector<int>> ans;
    
    void combi(vector<int> candidates,int i,int target,vector<int> temp)
    {
        int sum = accumulate(temp.begin(),temp.end(),0);
        
        if(sum>target)
        {
            temp.pop_back();
            return;
        }
        
        if(i >=candidates.size())
        {
            
            if(sum == target)
                ans.push_back(temp);
            
            return;
        }
        
        combi(candidates,i+1,target,temp);
        temp.push_back(candidates[i]);
        combi(candidates,i,target,temp);
        temp.pop_back();

    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> temp;
        combi(candidates,0,target,temp);
        
        return ans;
        
    }
};