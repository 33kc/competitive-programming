class Solution {
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> mappings =
        {
            {'M', 1000},
            {'D', 500},
            {'C', 100},
            {'L', 50},
            {'X', 10},
            {'V', 5},
            {'I', 1},
        };
        int r = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if (mappings[s[i]] < mappings[s[i+1]]) r -= mappings[s[i]];
            else r += mappings[s[i]];
        }
        return r;
    }
};
