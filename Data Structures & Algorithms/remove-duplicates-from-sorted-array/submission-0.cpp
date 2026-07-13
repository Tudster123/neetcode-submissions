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

    int removeDuplicates(vector<int>& nums) {
        int currentNumber = nums[0];
        int uniqueValues = 1;

        for(int i = 1; i < nums.size(); i++)
        {
            if(currentNumber == nums[i])
            {
                overrideElement(nums, i);
                i--;
            }
            else
            { 
                currentNumber = nums[i];
                uniqueValues++;
            }
        }
        return uniqueValues;
    }
};