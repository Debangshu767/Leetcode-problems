class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        
        
        
        if(k >= arr.size())
            return *max_element(arr.begin(),arr.end());
        
        int i = 1;
        int wincount = 0;
        int winidx = arr[0];
        while(wincount < k && i<arr.size())
        {
            if(winidx > arr[i])
            {
                wincount++;
                // int temp = arr[1];
                // arr.erase(arr.begin()+1);
                // arr.push_back(temp);
            }
            else
            {
                wincount = 1;
                winidx = arr[i];
                // swap(arr[1],arr[0]);
                // wincount++;
                // int temp = arr[1];
                // arr.erase(arr.begin()+1);
                // arr.push_back(temp);
            }
            i++;
        }
            
        return winidx;
        
    }
};