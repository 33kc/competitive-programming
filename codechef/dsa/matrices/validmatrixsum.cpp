#include <bits/stdc++.h>
using namespace std;

void print(int n, int m)
{
    for (int i = 0; i < n; i++) 
    {
    for (int j = 0; j < m; j++) cout << "1 ";
    cout << '\n';
    }
}

int main()
{
    int n, m; cin>>n>> m;
    if (n * m % 2 != 0) cout << -1;
    else print(n, m); 
    return 0;
}
