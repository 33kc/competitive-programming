#include <unordered_map>
#include <string>

class Solution 
{
public:
    int longestPalindrome(string s) 
    {
        unordered_map<char, int> freq;  
        for (char x : s) freq[x]++;
        int l = 0;  
        bool b = false;  
        for (auto& k : freq) 
        {
            int c = k.second;
            if (c % 2 == 0) l += c;
            else 
            {
                l += c - 1;
                b = true;
            }
        }
        if (b) l += 1;
        return l;
    }
};
