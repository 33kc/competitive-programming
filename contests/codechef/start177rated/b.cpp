#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--)
    {
        int x,y,k; cin>>x>>y>>k;
        if (abs(x -y) == k) cout << 0 << '\n';
        else if (k > x + y || (k % 2 != abs(x-y) % 2)) cout << -1 << '\n';
        else cout << (abs(k - abs(x - y)) / 2) << '\n';
    }

}
