
// this is my first d solve, had to use chatgpt tho to make me understand the problem easier
#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string a, b; cin >> a >> b;
        int l = 0, r = n - 1;
        bool rev = false, flip = false;
        vector<tuple<int,int,int>> ans;
        for (int i = n - 1; i >= 0; i--)
        {
            int cur = (!rev ? a[r] - '0' : a[l] - '0');
            if (flip) cur = 1 - cur;
            int target = b[i] - '0';
            if (cur == target)
            {
                if (!rev) r--;
                else l++;
                continue;
            }
            int other = (!rev ? a[l] - '0' : a[r] - '0');
            if (flip) other = 1 - other;
            if (other == cur)
            {
                if (!rev) ans.push_back({1, l + 1, l + 1});
                else ans.push_back({1, r + 1, r + 1});
            }
            ans.push_back({2, l + 1, r + 1});
            rev = !rev;
            flip = !flip;
            if (!rev) r--;
            else l++;
        }
        cout << ans.size() << "\n";
        for (auto &op : ans)
        {
            int typ, L, R;
            tie(typ, L, R) = op;
            cout << typ << " " << L << " " << R << "\n";
        }
    }
    return 0;
}
