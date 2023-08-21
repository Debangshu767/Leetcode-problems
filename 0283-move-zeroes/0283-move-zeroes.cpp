class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
//         vector<int> temp;
//         int zero = 0;
        
//         for(int i = 0;i<nums.size();i++)
//         {
//             if(nums[i] != 0)
//                 temp.push_back(nums[i]);
//             else
//                 zero++;
//         }
        
//         for(int i = 0;i<zero;i++)
//         {
//             temp.push_back(0);
//         }
//         nums = temp;
        int j = INT_MAX-1 ;
        for(int i = 0;i<nums.size();i++)
          {  if(nums[i] == 0)
              {
                j = i;
              break;
                }
           }
        int i = j+1;
        
        while(j < nums.size() && i<nums.size())
        {
            if(nums[i] != 0)
                {
                    swap(nums[i],nums[j]);
                    j++;
                }
            i++;
        }
        
    }
};