#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int minCost = INT_MAX;
        bool found = false;

        for(int i = 0; i < n; i++)
        {
            int rating, cost; cin >> rating >> cost;
            if(rating >= 7)
            {
                found = true;
                minCost = min(minCost, cost);
            }
        }

        cout << (found ? minCost : -1) << '\n';
    }
    return 0;
}
