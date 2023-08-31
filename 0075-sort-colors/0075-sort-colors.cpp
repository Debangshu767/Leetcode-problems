class Solution {
public:
    void sortColors(vector<int>& arr) {
        
        
        int n = arr.size()-1   ;     
        int low = 0;
        int mid = 0;
        int high = n;
        
        
        while(mid<=high)
        {
            if(arr[mid] == 0)
            {
                swap(arr[mid],arr[low]);
                mid++; low++;
            }
            
           else if(arr[mid] == 1)
                mid++;
           else if(arr[mid] == 2)
            {
                swap(arr[high],arr[mid]);
                high--;
            }
        }
        
    }
};