#include <bits/stdc++.h>
using namespace std;
// this was a 1492 difficulty problem (first solve above 1400+)!
void solve() 
{
    int n;
    cin >> n;
    vector<string> s(3);
    cin >> s[0] >> s[1] >> s[2];
    vector<int> zeroes(3, 0), ones(3, 0);
    int totalZeroes = 0, totalOnes = 0;
    for (int i = 0; i < 3; i++) 
    {
        for (char c : s[i]) 
        {
            if (c == '0') zeroes[i]++;
            else ones[i]++;
        }
        totalZeroes += zeroes[i];
        totalOnes += ones[i];
    }
    if (totalZeroes % n != 0) 
    {
        cout << -1 << "\n";
        return;
    }
    int minSwap1 = min({zeroes[1], ones[1], zeroes[2], ones[2]});
    int minSwap2 = min({zeroes[0], ones[0], max(min(zeroes[1], ones[1]), min(zeroes[2], ones[2]))});

    cout << minSwap1 + minSwap2 << "\n";
}

int main() 
{
    int t; cin >> t;
    while (t--) solve();

    return 0;
}
