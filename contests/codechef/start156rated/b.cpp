#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--)
    {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];
        int position = n;
        int sushilWealth = a[n - 1];
        for (int i = n - 2; i >= 0; --i) 
        {
            if (a[i] <= sushilWealth / 2) --position; 
            else break; 
        }
        cout << position << endl; 
    }

    return 0;
}
