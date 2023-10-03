class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int count1 = 0;
        int count2 = 0;
        int elem1 = INT_MIN;
        int elem2 = INT_MAX;
        
        for(int i = 0;i<nums.size();i++)
        {
            if(count1 == 0 && elem2 != nums[i])
            {
                count1++;
                elem1 = nums[i];
            }
            else if(count2 == 0 && elem1 != nums[i])
            {
                count2++;
                elem2 = nums[i];
            }
            else if(nums[i] == elem1)
                count1++;
            else if(nums[i] == elem2)
                count2++;
            else
            {
                count1--;
                count2--;
            }
        }
        
       vector<int> output;
        int countMajority = nums.size()/3;
        count1 = 0, count2 = 0;
        for(auto element : nums){
            if(elem1 == element){
                count1++;
            }
            if(elem2 == element){
                count2++;
            }
        }
        if(count1 > countMajority){
            output.push_back(elem1);
        }
        if(count2 > countMajority){
            output.push_back(elem2);
        }
        return output;
        
        
    }
};