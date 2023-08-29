class Solution {
public:
    int minimumSum(int num) {
        
        vector<int> ans;
        
        while(num > 0)
        {
            int temp = num%10;
            ans.push_back(temp);
            num = num/10;
        }
        
        sort(ans.begin(),ans.end());
        
        for(int i = 0;i<ans.size();i++)
        {
            cout<<ans[i];
        }
        
        return((ans[0]*10 + ans[3]) + (ans[1]*10 + ans[2]));
        
    }
};