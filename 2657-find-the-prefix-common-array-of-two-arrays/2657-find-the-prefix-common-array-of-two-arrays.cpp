class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        
        vector<int> ans;
        vector<int> occ(A.size()+1,0);
        
        int count = 0;
        for(int i = 0;i<A.size();i++)
        {
            
            occ[A[i]]++;
            
            if(occ[A[i]] == 2)
                count++;
            
            occ[B[i]]++;
            
            // for(int i = 0;i<occ.size();i++)
            // {
            //     if(occ[i] == 2)
            //         count++;
            // }
            
            if(occ[B[i]] == 2)
                count++;
            
            ans.push_back(count);
            
        }
        
        return ans;
        
    }
};