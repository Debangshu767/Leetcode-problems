class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        
        for(int i = 0;i<intervals.size();i++)
        {
            cout<< intervals[i][0]<<" "<<intervals[i][1]<<"  ";
        }
        cout<<endl;
        vector<vector<int>> ans;
        vector<int> prev = {-1,-1};
        
        for(int i = 0;i<intervals.size();i++)
        {
            int curr1 = intervals[i][0];
            int curr2 = intervals[i][1];
            
            if(curr1 <= prev[1])
                continue;
            
            for(int j = i+1;j<intervals.size();j++)
            {
                if(curr2 >= intervals[j][0])
                    curr2 = max(curr2,intervals[j][1]);
                else
                    break;
                    
            }
            prev = {curr1,curr2};
            cout<<prev[0]<<","<<prev[1]<<"  ";
            ans.push_back(prev);
        }
        
        return ans;

        
    }
};