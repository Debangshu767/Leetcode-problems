class Solution {
public:
    
    int fibodp(int n, vector<int> &arr)
    {
        if(n == 0)
            return 0;
        if(n == 1 || n == 2)
            return 1;
        
        int first,second;
        if(arr[n] != -1)
        {
            return arr[n];
        }
            
        
       return arr[n] =   fibodp(n-1,arr)  + fibodp(n-2,arr);
        
    }
    
    
    int fib(int n) {
        
        vector<int> arr(n+1,-1);
        

        
       return  fibodp(n,arr);
        
    }
};