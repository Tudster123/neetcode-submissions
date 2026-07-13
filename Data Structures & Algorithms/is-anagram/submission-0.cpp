class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.size() != t.size())
            return false;
        return insertionSort(s) == insertionSort(t);
    }

    string insertionSort(string s)
    {
        int j;
        for(size_t i=1;i<s.size();i++)
        {
            j = i-1;
            while(j>=0 && (s.at(j+1)<s.at(j)))
            {
                char tmp = s.at(j);
                s.at(j) = s.at(j+1);
                s.at(j+1) = tmp;
                j--;
            }
        }
        return s;
        cout<<s;
    }
};
