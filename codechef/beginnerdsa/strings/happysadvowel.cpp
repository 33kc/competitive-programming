#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t; cin >> t; 
    while (t--)
    {
        string s; cin >> s; 
        int c = 0; 
        unordered_map<char, bool> vowelMap = {{'a', true}, {'e', true}, {'i', true}, {'o', true}, {'u', true}};

        for (char ch : s)
        {
            c = (vowelMap[ch]) ? c + 1 : 0;
            if (c == 3) { cout << "Happy\n"; break; }
        }
        if (c != 3) cout << "Sad\n";
    }
    return 0;
}
