class Solution {
public:
    bool isValid(string s) {
        if(s.empty() || s.size()%2 == 1)
            return false;

        std::stack<char> stacc;

        stacc.push(s.at(0));

        for(int i = 1; i < s.size(); i++)
        {
            if(!stacc.empty())
                switch (s.at(i))
                {
                    case ']':
                        if(stacc.top() != '[')
                            return false;
                        stacc.pop();
                        break;
                    case ')':
                        if(stacc.top() != '(')
                            return false;
                        stacc.pop();
                        break;
                    case '}':
                        if(stacc.top() != '{')
                            return false;
                        stacc.pop();
                        break;
                    default:
                        stacc.push(s.at(i));
                }
            else
            {
                stacc.push(s.at(i));
            }
        }
        return stacc.empty();
    }
};
