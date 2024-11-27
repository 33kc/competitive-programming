#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() 
{
    int T; cin >> T;
    while (T--)
    {
        int N; cin >> N;
        vector<int> scores(N);
        for (int i = 0; i < N; ++i) cin >> scores[i];
        int c = accumulate(scores.begin(), scores.end(), 0);
        int k = 50 * (N + 1); // 50% of (N+1) * 100
        if (k - c > 100) cout << -1 << endl;
        else {
            cout << max(0, k - c) << endl;
        }
    }
}
