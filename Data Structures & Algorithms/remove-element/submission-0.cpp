class Solution {
public:
    
        
        void overrideElement(vector<int>& nums, int position)
    {
        for(int i = position; i < nums.size() - 1; i++)
        {
            nums[i] = nums[i+1];
        }

        nums.pop_back();
    }

    int removeElement(vector<int>& nums, int val) {
        int totalElements = nums.size();

        for(int i = 0; i < nums.size(); i++)
        {
            if(val == nums[i])
            {
                overrideElement(nums, i);
                totalElements--;
                i--;
            }
        }
        return totalElements;
    }
};