class Solution {
public:
    
     vector<vector<int>> ans;
    
    void combi(vector<int> candidates,int ind,int target,vector<int> temp)
    {
        if(target == 0)
        {       
            ans.push_back(temp);
            
            return;
        }
        
        for(int i = ind;i<candidates.size();i++)
        {
            if(i > ind  && candidates[i] == candidates[i-1])
                continue;
            if(candidates[i] > target) break;
            temp.push_back(candidates[i]);
            combi(candidates,i+1,target-candidates[i],temp);
            temp.pop_back();
        }
        

    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        combi(candidates,0,target,temp);
        
        return ans;
    }
};