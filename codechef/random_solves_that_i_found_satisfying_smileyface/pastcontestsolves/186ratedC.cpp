#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) 
    {
        vector<int> ratings(5);
        int sum = 0;
        for (int i = 0; i < 5; i++) 
        {
            cin >> ratings[i];
            sum += ratings[i];
        }

        int coins = 0;
        while (sum < 35) 
        {
            vector<int> ar = {ratings[0], 0};
            for (int i = 1; i < 5; i++) 
            {
                if (ratings[i] < ar[0]) 
                {
                    ar[0] = ratings[i];
                    ar[1] = i;
                }
            }
            int idx = ar[1];
            sum += (10 - ratings[idx]);
            ratings[idx] = 10;
            coins += 100;
        }
        cout << coins << '\n';
    }
    return 0;
}
