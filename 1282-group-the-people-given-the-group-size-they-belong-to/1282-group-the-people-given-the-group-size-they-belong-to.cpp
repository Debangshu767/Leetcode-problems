class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gs) {
        
        
        int s = gs.size();
        vector<vector<int>> ans;
        
        
        for(int i=0;i<s;i++)
        {
            if(gs[i] == 0) continue;
            
            int size = gs[i];
            vector<int> temp;
            
            for(int j = 0;j<s && temp.size() < size;j++)
            {
                
                if(gs[j] == size)
                {
                    temp.push_back(j);
                        gs[j] = 0;
                }
            }
            if(temp.size() !=0)
                ans.push_back(temp);
        }
        
        return ans;
    }
};