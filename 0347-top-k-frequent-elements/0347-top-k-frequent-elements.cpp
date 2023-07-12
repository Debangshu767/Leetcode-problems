class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int>mp;
        
        for(int i =0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<vector<int>> fq(nums.size()+1);
        vector<int> result;
        for(auto it = mp.begin() ; it!= mp.end(); it++){
            fq[it->second].push_back(it->first);
        }
        
        for(int i = fq.size() -1; i >= 0 ; i--){
            if(result.size() >= k){
                break;
            }
            if(!fq[i].empty()){
                for(auto item:fq[i]){
                    
                        result.push_back(item);
                    
                }
            }
            
        }
        return result;
        
    }
};