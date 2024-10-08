class Solution {
public:
    std::string longestPalindrome(std::string s) {
        if (s.length() <= 1) {
            return s;
        }
        
        int a = 1;
        std::string b = s.substr(0, 1);
        
        for (int c = 0; c < s.length(); ++c) {
            for (int d = c + a; d <= s.length(); ++d) {
                if (d - c > a && x(s.substr(c, d - c))) {
                    a = d - c;
                    b = s.substr(c, d - c);
                }
            }
        }

        return b;
    }

private:
    bool x(const std::string& y) {
        int r = 0;
        int z = y.length() - 1;
        
        while (r < z) {
            if (y[r] != y[z]) {
                return false;
            }
            ++r;
            --z;
        }
        
        return true;
    }
};
