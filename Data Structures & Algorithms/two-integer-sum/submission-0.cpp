class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> solution;
        for(size_t i = 0; i<nums.size();i++)
        {
            for(size_t j = i+1; j<nums.size();j++)
            {
                if(nums.at(i) + nums.at(j) == target)
                {
                    solution.push_back(i);
                    solution.push_back(j);
                    return solution;
                }
            }
        }
    }
};
