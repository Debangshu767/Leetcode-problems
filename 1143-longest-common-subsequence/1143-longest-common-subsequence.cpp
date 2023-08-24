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
    
    int longestCommonSubsequence(string text1, string text2) {
        
        int i = text1.size()-1;
        int j = text2.size()-1;
        vector<vector<int>>dp (i+1,vector<int>(j+1,-1));
       return findlargest(text1,text2,i,j,dp);
        
    }
};