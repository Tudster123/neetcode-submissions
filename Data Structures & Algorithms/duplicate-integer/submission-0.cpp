class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        std::set<int> uniques;
        for(int num : nums)
        {
            if(uniques.contains(num))
                return true;
            uniques.insert(num);
        }
        return false;
    }
};