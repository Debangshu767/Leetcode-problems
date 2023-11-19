class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
       int  tg = nums[0];
        int steps = 0;
        int count = 0;
            for(int i = 1;i<nums.size();i++)
            {
                while(nums[i] == nums[0])
                    i++;
                
                if(i >= nums.size())
                    return steps;
                
               if(nums[i] == tg)
               {
                   steps+= count;
               }
                else
                {
                    steps+= 1 +  count++;
                    tg = nums[i];
                }
            }
        
        return steps;
        
    }
};