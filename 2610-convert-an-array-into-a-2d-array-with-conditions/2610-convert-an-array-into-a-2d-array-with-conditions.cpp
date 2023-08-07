class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> taken(nums.size(),-1);
            int flag = 0;
            while(flag == 0)
            {
                vector<int> temp;
                 flag = -1;
             for(int i = 0;i<nums.size();i++)
                {
                   
                    
                    if(taken[i] == -1 && (find(temp.begin(),temp.end(),nums[i]) == temp.end() || temp.empty()))
                        {
                            flag = 0;
                            temp.push_back(nums[i]);
                            taken[i]=0;
                        }
            
                 }
                        ans.push_back(temp);
                
                
            }
        
        ans.pop_back();
        return ans;
           
        
    }
};