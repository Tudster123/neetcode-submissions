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

    int removeDuplicatesN2(vector<int>& nums) {
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

    int removeDuplicatesNlogN(vector<int>& nums)
    {
        set<int> uniqueNumbers;

        for(int i : nums)
            uniqueNumbers.insert(i);
        nums = std::vector<int>(uniqueNumbers.begin(), uniqueNumbers.end());
        return uniqueNumbers.size();
    }

    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), l = 0, r = 0;
        while (r < n) {
            nums[l] = nums[r];
            while (r < n && nums[r] == nums[l]) {
                r++;
            }
            l++;
        }
        return l;
    }
};