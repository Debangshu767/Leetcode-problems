class Solution {
public:
    
    int climb(int n, vector<int> &arr)
    {
         if(n == 0) return 0;
        if(n == 1 ) return 1;
        if(n == 2 ) return 2;
        
        
        if(arr[n] != -1)
            return arr[n];
        
        
        
        
        
        return arr[n]  =  climb(n-1,arr) + climb(n-2,arr);
    }
    
    int climbStairs(int n) {
        
  
        vector<int> arr(n+1,-1);
        
       return  climb(n,arr);
        
      
    }
};