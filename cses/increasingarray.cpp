#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0; 
    cin >> n;
    long long int x = 0;
    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 1; i < n; i++) 
    {
        if (a[i] < a[i - 1]) {
            x += (a[i - 1] - a[i]);
            a[i] = a[i - 1]; 
        }
    }
    cout << x << '\n';
    return 0;
}
