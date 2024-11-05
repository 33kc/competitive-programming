#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n, m; cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++)  cin >> a[i][j];
    }
    int k = 0, r = 0,c = m - 1; 

    while (r < n && c >= 0) 
    {
        if (a[r][c] < 0) 
        {
            k += (n - r);
            c--;
        } 
        else  r++;
    }

    cout << k << '\n';
}
