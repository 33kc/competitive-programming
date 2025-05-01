#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;

        if (n == 1)cout << -1 << '\n';
        else if (n % 2 == 0) 
        {
            for (int i = 0; i < n/2; ++i) 
            {
                cout << 2 << ' ' << -2 << ' ';
            }
            cout << '\n';
        }
        else 
        {
            cout << 3 << ' ' << -2 << ' ' << -1 << ' ';
            /*  printing 3, -2, -1 sums upto 0
                that leaves us with n-3 which is even
                so we can continue printing pairs of (2,-2)
            */
            int pairs = (n - 3) / 2;
            for (int i = 0; i < pairs; ++i) 
            {
                cout << 2 << ' ' << -2 << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}
