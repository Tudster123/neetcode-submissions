class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        result.resize(2*n);

        for(int i = 0;i<n;i++)
        {
            result[i] = nums[i];
            result[i+n] = nums[i];
        }

        return result;
    }
};