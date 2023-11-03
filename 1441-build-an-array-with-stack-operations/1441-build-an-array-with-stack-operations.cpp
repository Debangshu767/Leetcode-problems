class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        
        int idx = 0;
        vector<string> ans;
        for(int i = 1;i<=n;i++)
        {
            if(i == target[idx])
            {
                ans.push_back("Push");
                idx++;
                
            }
            else
            {
               ans.push_back("Push");
                ans.push_back("Pop"); 
            }
            if(idx == target.size())
                break;
        }
        
        return ans;
        
    }
};