class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        
        int inx = points[0][0];
        int iny = points[0][1];
        int time = 0;
        for(int i = 1;i<points.size();i++)
        {
            int dt = max(abs(points[i][0]-inx),abs(points[i][1]-iny));
            time += dt;
//             if(inx + dt == points[i][0] || iny + dt == points[i][1])
//             {
//                 inx += dt;
//                 iny += dt;
//             }
//             else
//             {
//                 iny-=dt;
//                 inx-=dt;
//             }
            
//             if(inx != points[i][0])
//             {
//                 time+= abs(inx-points[i][0]);
//             }
//             if(iny != points[i][1])
//             {
//                 time+= abs(iny - points[i][1]);
//             }
            inx = points[i][0];
            iny = points[i][1];
            
        }
        
        return time;
        
        
    }
};