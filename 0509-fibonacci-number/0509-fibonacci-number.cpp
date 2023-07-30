class Solution {
public:
    
    int fibodp(int n, vector<int> &arr)
    {
        if(n == 0)
            return 0;
        if(n == 1 || n == 2)
            return 1;
        
        int first,second;
        if(arr[n-1] != -1)
        {
            first = arr[n-1];
        }
        else
        {
            first =  fibodp(n-1,arr);
                arr[n-1] = first;
        }
        
        if(arr[n-2] != -1)
        {
            second = arr[n-2];
        }
        else{
            second = fibodp(n-2,arr);
            arr[n-2] = second;
        }
            
        
       return  first  +  second;
        
    }
    
    
    int fib(int n) {
        
        vector<int> arr(n+1,-1);
        

        
       return  fibodp(n,arr);
        
    }
};