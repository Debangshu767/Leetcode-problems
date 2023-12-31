class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        
        sort(points.begin(),points.end(),[&](vector<int>& p1,vector<int>& p2){
            return p1[0]<p2[0] ;
        });
        
        int ans = -1;
        for(int i = 1;i<points.size();i++)
        {
            
            ans = max(ans,points[i][0] - points[i-1][0]);
        }
        
        return ans;
        
    }
};