class Solution {
public:
    int lengthOfLongestSubstring(string s)
     {
        int x = s.length();
        int ml = 0;
        unordered_set<char> set;
        int l = 0;

        for (int r = 0; r < x; r++)
        {
            if (set.count(s[r]) == 0)
            {
                set.insert(s[r]);
                ml = max(ml, r - l + 1);
            }
            else 
            {
                while (set.count(s[r]))
                {
                    set.erase(s[l]);
                    l++;
                }
                set.insert(s[r]);
            }
        }
        return ml;
    }
};
