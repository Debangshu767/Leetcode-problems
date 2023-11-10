class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& arr) {
        
        unordered_map<int,vector<int>> mp;
        for(int i = 0;i<arr.size();i++)
        {
            mp[arr[i][0]].push_back(arr[i][1]);
                mp[arr[i][1]].push_back(arr[i][0]);
        }
        
        // for(auto it : mp)
        // {
        //     cout<<it.first<<": ";
        //     for(auto se : it.second)
        //     {
        //         cout<<se<<",";
        //     }
        //     cout<<endl;
        // }
        
        vector<int>ans;
       for(auto it : mp)
       {
           if(it.second.size() == 1)
           {
              ans = {it.first, it.second[0]};
               break;
           }               
       }
        
        while(ans.size()<arr.size()+1)
        {
            int last = ans[ans.size() - 1];
            int prev = ans[ans.size() - 2];
            
            vector<int> cand = mp[last];
            
            if(cand[0] != prev)
                ans.push_back(cand[0]);
            else
                ans.push_back(cand[1]);
        }
        
        return ans;
        
    }
};