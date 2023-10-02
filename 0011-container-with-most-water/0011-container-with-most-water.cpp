class Solution {
public:
    int maxArea(vector<int>& height) {

        int maxi = 0;
        int start = 0;
        int end = height.size()-1;
        while(start<end)
        {
                
            int w = end - start;
             int h = min(height[start], height[end]);
             int area = w * h;
            maxi = max(maxi,area);

            if(height[start] < height[end])
                start++;
            else if(height[start] > height[end])
            {
                end--;
            }
            else
            {
                start++;
                end--;
            }

        }
        return maxi;
    }
};