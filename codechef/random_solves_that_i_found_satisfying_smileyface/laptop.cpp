#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int ai;
            cin >> ai;
            mp[ai]++;
        }
        int mc = 0, ml = 0, l = -1;
        for (int i = 1; i <= 10; i++)
        {
            if (mp[i] > mc)
            {
                mc = mp[i];
                l = i;
                ml = 1;
            }
            else if (mp[i] == mc) ml++;
        }
        if (ml > 1) cout << "CONFUSED" << '\n';
        else cout << l << '\n';
    }
}
