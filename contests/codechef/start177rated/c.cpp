#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t,n; cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> x(n), y(n);
        for(int i = 0; i < n; i++) cin>>x[i];
        for(int i = 0; i < n; i++) cin>>y[i];
        
        bool isTherePivot = false;
        for(int i = 0; i < n; i++)
        {
            vector<pair<int, int>> lists;
            int pivotassume = x[i];
            for(int j = 0; j < n; j++) lists.push_back({abs(x[j] - pivotassume), x[j]});
            sort(lists.begin(), lists.end());
            vector<int> newone;
            for(auto& m : lists)
            {
                newone.push_back(m.second);
            }
            if (newone == y)
            {
                cout << i + 1 << '\n'; // one indexed
                isTherePivot = true;
                break;
            }
        }
        if (isTherePivot == false) cout << -1 << '\n';
    }
	

}
