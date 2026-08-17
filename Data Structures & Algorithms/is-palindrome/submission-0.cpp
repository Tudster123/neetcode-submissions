class Solution {
public:
    bool isPalindrome(string s) {
        string::iterator itLeft = s.begin();
        string::iterator itRight = s.end() - 1;

        while(itLeft < itRight)
        {
            if(!isalnum(*itLeft)) {
                itLeft++;
                continue;
            }
            if(!isalnum(*itRight)) {
                itRight--;
                continue;
            }
            if(tolower(*itLeft) == tolower(*itRight))
            {
                itLeft++;
                itRight--;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};
