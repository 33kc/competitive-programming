#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        int maxOnes = (n + 1) / 2;
        int minOnes = n / 2;
        if (k < minOnes || k > maxOnes) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}
