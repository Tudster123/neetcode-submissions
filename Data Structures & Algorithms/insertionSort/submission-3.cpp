// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) 
    {
        vector<vector<Pair>> iterations;
        iterations.reserve(pairs.size());
        int j;

        if(!pairs.empty())
        {
            for(int i = 1; i < pairs.size(); i++)
            {
                iterations.push_back(pairs);

                j = i-1;
                while(j >= 0 && pairs.at(j+1).key < pairs.at(j).key)
                {
                    swap(pairs.at(j+1), pairs.at(j));
                    --j;
                }
            }

            iterations.push_back(pairs);
        }
        return iterations;
    }
};
