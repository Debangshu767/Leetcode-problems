class Solution {
public:
    
    int findlargest(string &t1,string &t2,int i,int j,vector<vector<int>> &dp)
    {
        if(i<0 || j<0)
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(t1[i] == t2[j])
            return 1+findlargest(t1,t2,i-1,j-1,dp);
        
      int take =  findlargest(t1,t2,i-1,j,dp);
      int notake =  findlargest(t1,t2,i,j-1,dp);
        
        return dp[i][j] =  max(take,notake);
        
        
    }
    
    int longestCommonSubsequence(string t1, string t2) {
        
        int ind = t1.size();
        int jnd = t2.size();
        vector<vector<int>>dp (ind+1,vector<int>(jnd+1,0));
        
        for(int j = 0;j<=jnd;j++)  dp[0][j] = 0;
        for(int i = 0;i<=ind;i++)     dp[i][0] = 0;
        
        
        for(int i = 1;i<=ind;i++)
        {
            for(int j = 1 ;j<=jnd;j++)
            {
                 if(t1[i-1] == t2[j-1])
                    dp[i][j] =  1+dp[i-1][j-1];
                else
                {
                    int take =  dp[i-1][j];
                    int notake =  dp[i][j-1];
        
                 dp[i][j] =  max(take,notake); 
                }
                
            }
        }
        return dp[ind][jnd];
       // return findlargest(text1,text2,i,j,dp);
        
    }
};