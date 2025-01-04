class Solution {
public:
    string encode(vector<string>& strs)
    {
        if (strs.empty()) return "";
        vector<int> m;
        string r = "";
        for (string& s : strs) 
        {
            m.push_back(s.size());
        }
        for (int sz : m) {
            r += to_string(sz) + ',';
        }
        r += '#';
        for (string& s : strs) 
        {
            r += s;
        }
        return r;
    }

    vector<string> decode(string s) 
    {
        if (s.empty()) return {};
        vector<int> m;
        vector<string> r;
        int i = 0;
        while (s[i] != '#') 
        {
            string cur = "";
            while (s[i] != ',') 
            {
                cur += s[i];
                i++;
            }
            m.push_back(stoi(cur));
            i++;
        }
        i++;
        for (int sz : m) 
        {
            r.push_back(s.substr(i, sz));
            i += sz;
        }
        return r;
    }
};
