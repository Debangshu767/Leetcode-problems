class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
       unordered_set<int> numset(nums.begin(),nums.end());
        int maxlen = 0;
        for(auto &n : numset)
        {
            if(!numset.count(n - 1 ))
            {
                int length = 1;
                while(numset.count(n+length))
                {
                   ++length;
                    
                }
                maxlen = max(length,maxlen);
            }
        }
        
        return maxlen;
        
        
        
    }
};