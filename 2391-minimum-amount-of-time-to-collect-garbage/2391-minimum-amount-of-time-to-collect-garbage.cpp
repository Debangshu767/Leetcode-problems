class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        
        int timep = 0;
        int timem = 0;
        int timeg = 0;
        int lastp = 0;
        int lastm = 0;
        int lastg = 0;
        int movetime = 0;
        for(int i = 0;i<garbage.size();i++)
        {
            for(auto garbageType : garbage[i])
            {
                if(garbageType == 'P')
                {
                    timep++;
                    lastp = i;
                    
                }
                if(garbageType == 'M')
                {
                    timem++;
                    lastm = i;
                }
                if(garbageType == 'G')
                {
                    timeg++;
                    lastg = i;
                }
            }
        }
        
        for(int i = 0;i<garbage.size();i++)
        {
            if(lastp > i)
                movetime += travel[i];
            if(lastm > i)
                movetime += travel[i];
            if(lastg > i)
                movetime += travel[i];
        }
        
        return timep + timem + timeg + movetime;
        
    }
};