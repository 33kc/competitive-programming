#include <iostream>
#include<vector>
using namespace std;

int main() 
{
    int t; cin >> t;
    while (t--) 
    {
        int n; cin >> n;
        vector<int> num(n);
        for (int i = 0; i < n; i++) cin >> num[i];
        bool flag = false;
        for (int i = 0; i < n - 1; i++) 
        {
            if (num[i] > num[i + 1]) 
            {
                flag = true;
                break;
            }
        }
        cout << (flag ? "No" : "Yes") << endl;
    }
    return 0;
}
