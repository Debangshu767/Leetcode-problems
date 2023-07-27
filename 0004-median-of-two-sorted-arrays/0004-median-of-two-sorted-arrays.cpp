class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        float median;
        
        int s1 = nums1.size();
        int s2 = nums2.size();
        
        int i = 0;
        int j = 0;
        vector<int> arr(s1+s2,0);
        int idx = -1;
        
        while(i<s1 && j<s2)
        {
           if(nums1[i] <= nums2[j])
           {
               arr[++idx] = nums1[i++];
           }
            else
            {
                arr[++idx] = nums2[j++];
            }
        }
        
        while(i<s1)  arr[++idx] = nums1[i++];
        while(j<s2) arr[++idx] = nums2[j++];
        
        int s = s1+s2;
        
        if(s%2 == 0)
        {
            return (arr[s/2] + arr[s/2 -1])/2.0;
            
        }
            return arr[s/2];
        
    }
};