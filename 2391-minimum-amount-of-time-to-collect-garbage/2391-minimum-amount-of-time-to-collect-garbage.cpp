class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int time = 0;
        
        int timem = 0;
        int timep = 0;
        int timeg = 0;
        int movetime = 0;
        int lastidxm = 0;
        int lastidxp =0;
        int lastidxg = 0;
        
        
        
       
        
        for(int i = 0;i<garbage.size();i++)
        {

            
            for(int j = 0 ; j< garbage[i].length();j++)
            {
                
                
                if(garbage[i][j] == 'M')
                {
                    timem++;
                    lastidxm = i;
                    
                }
                
                 if(garbage[i][j] == 'P')
                {
                    timep++;
                     lastidxp = i;
                }
                if(garbage[i][j] == 'G')
                {
                    timeg++;
                    lastidxg = i;
                }
                    
            }

        }
        
        for(int i = 0;i<travel.size();i++)
        {
            if(lastidxm>i)
                movetime+=travel[i];
            if(lastidxp>i)
                movetime+=travel[i];
            if(lastidxg>i)
                movetime+=travel[i];
        }
        
        return movetime+timem+timep+timeg;
        
    }
};