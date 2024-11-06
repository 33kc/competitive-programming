#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T; cin >> T;
    while (T--) 
    {
        int n, x;
        cin >> n >> x;
        vector<int> A(n), B(n);
        for (int i = 0; i < n; ++i) cin >> A[i];
        for (int i = 0; i < n; ++i) cin >> B[i];
        int rw = (n / 2) + 1;
        int cw = 0;
        vector<int> nv;
        for (int i = 0; i < n; ++i) 
        {
            if (A[i] > B[i]) 
            {
                cw++;
            } else 
            {
                int h = (B[i] - A[i]) + 1;
                nv.push_back(h);
            }
        }
        sort(nv.begin(), nv.end());
        for (int h : nv) 
        {
            if (cw >= rw) break; 
            if (x >= h) 
            {
                x -= h;
                cw++;
            }
        }
        if (cw >= rw)cout << "YES" << endl;
        else cout << "nO" << endl;
    }

    return 0;
}
