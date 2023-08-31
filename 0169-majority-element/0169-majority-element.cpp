class Solution {
public:
    int majorityElement(vector<int>& arr) {
        
        int count = 1;
        int element = arr[0];
        
        for(int i = 1;i<arr.size();i++)
        {
            if(count == 0)
                element = arr[i];
            
            if(arr[i] == element)
                count++;
            else
                count--;
            
            
        }
        
        return element;
        
    }
};