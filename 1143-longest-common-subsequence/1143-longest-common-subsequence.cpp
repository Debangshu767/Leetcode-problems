class Solution {
public:
    
//     int findlargest(string &t1,string &t2,int i,int j,vector<vector<int>> &dp)
//     {
//         if(i<0 || j<0)
//             return 0;
        
//         if(dp[i][j] != -1)
//             return dp[i][j];
        
//         if(t1[i] == t2[j])
//             return 1+findlargest(t1,t2,i-1,j-1,dp);
        
//       int take =  findlargest(t1,t2,i-1,j,dp);
//       int notake =  findlargest(t1,t2,i,j-1,dp);
        
//         return dp[i][j] =  max(take,notake);
        
        
//     }
    
    int longestCommonSubsequence(string t1, string t2) {
        
        int ind = t1.size();
        int jnd = t2.size();
        vector<int> prev(jnd+1,0),curr(jnd+1,0);        
        for(int j = 0;j<=jnd;j++)  prev[j] = 0;
        
        
        for(int i = 1;i<=ind;i++)
        {
            for(int j = 1 ;j<=jnd;j++)
            {
                 if(t1[i-1] == t2[j-1]) curr[j] =  1 + prev[j-1];
                else curr[j] =  max(prev[j],curr[j-1]); 
               
                
            }
             prev = curr;
        }
        return prev[jnd];
       // return findlargest(text1,text2,i,j,dp);
        
    }
};